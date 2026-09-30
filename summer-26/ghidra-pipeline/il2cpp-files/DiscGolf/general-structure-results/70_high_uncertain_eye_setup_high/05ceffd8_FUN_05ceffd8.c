/*
FUNCTION_NAME: FUN_05ceffd8
ENTRY_POINT: 05ceffd8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05ceffd8(long param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_06dc2dbf & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<CType>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_Add__);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a12a30);
    DAT_06dc2dbf = 1;
  }
  FUN_05d01104(0);
  if ((param_2 & 1) == 0) {
    if (param_1 == 0) goto LAB_05cf0260;
    lVar8 = FUN_05c0aa7c(param_1,0);
  }
  else {
    if (param_1 == 0) goto LAB_05cf0260;
    uVar7 = FUN_05c0c424(param_1,0);
    lVar8 = FUN_05362cb4(uVar7,*(undefined8 *)PTR_DAT_06a12a30,0);
  }
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x10);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_102_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar9 = (long *)FUN_05cf026c();
    if (plVar9 != (long *)0x0) {
      iVar5 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
      puVar4 = Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_Add__;
      puVar3 = Method_System_Collections_Generic_HashSet<CType>_Add__;
      if (0 < iVar5) {
        iVar5 = 0;
        do {
          plVar10 = (long *)(**(code **)(*plVar9 + 0x2e8))
                                      (plVar9,iVar5,*(undefined8 *)(*plVar9 + 0x2f0));
          if (plVar10 == (long *)0x0) goto LAB_05cf0260;
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar10);
          }
          lVar11 = plVar10[2];
          if (lVar11 == 0) goto LAB_05cf0260;
          if ((*(int *)(lVar11 + 0x10) <= iVar1) &&
             (iVar6 = FUN_0536a97c(lVar11,0,lVar8,0,*(int *)(lVar11 + 0x10),5,0), iVar6 == 0)) {
            plVar9 = (long *)FUN_05ceb79c(plVar10);
            if (plVar9 == (long *)0x0) goto LAB_05cf0260;
            lVar8 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar14 == 0) goto LAB_05cf020c;
            piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_05cf01f4;
          }
          iVar5 = iVar5 + 1;
          iVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
        } while (iVar5 < iVar6);
      }
      FUN_05d01104(0);
      uVar7 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_Contains__
                                );
      uVar7 = FUN_0534f2b4(uVar7,0);
      thunk_FUN_02dfd288(PTR_DAT_069fba18);
      uVar12 = thunk_FUN_02dd3144();
      FUN_054e3304(uVar12,uVar7,0);
      uVar7 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_CopyTo__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar7);
    }
  }
LAB_05cf0260:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05cf01f4:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_05cf0228;
    }
  }
LAB_05cf020c:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar3,0);
FUN_05cf0228:
  uVar7 = (*(code *)*puVar13)(plVar9,param_1,puVar13[1]);
  FUN_05d01104(0);
  return uVar7;
}


