/*
FUNCTION_NAME: UnityEngine.InputSystem.DefaultInputActions$$Dispose
ENTRY_POINT: 05cf006c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_InputSystem_DefaultInputActions__Dispose(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  
  if ((unaff_x19 != 0) && (lVar7 = FUN_05c0aa7c(), lVar7 != 0)) {
    iVar1 = *(int *)(lVar7 + 0x10);
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_102_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar8 = (long *)FUN_05cf026c();
    if (plVar8 != (long *)0x0) {
      iVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
      puVar4 = Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_Add__;
      puVar3 = Method_System_Collections_Generic_HashSet<CType>_Add__;
      if (0 < iVar5) {
        iVar5 = 0;
        do {
          plVar9 = (long *)(**(code **)(*plVar8 + 0x2e8))
                                     (plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x2f0));
          if (plVar9 == (long *)0x0) goto LAB_05cf0260;
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar9);
          }
          lVar10 = plVar9[2];
          if (lVar10 == 0) goto LAB_05cf0260;
          if ((*(int *)(lVar10 + 0x10) <= iVar1) &&
             (iVar6 = FUN_0536a97c(lVar10,0,lVar7,0,*(int *)(lVar10 + 0x10),5,0), iVar6 == 0)) {
            plVar8 = (long *)FUN_05ceb79c(plVar9);
            if (plVar8 == (long *)0x0) goto LAB_05cf0260;
            lVar7 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar14 == 0) goto LAB_05cf020c;
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_05cf01f4;
          }
          iVar5 = iVar5 + 1;
          iVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
        } while (iVar5 < iVar6);
      }
      FUN_05d01104(0);
      uVar11 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_Contains__
                                 );
      uVar11 = FUN_0534f2b4(uVar11,0);
      thunk_FUN_02dfd288(PTR_DAT_069fba18);
      uVar12 = thunk_FUN_02dd3144();
      FUN_054e3304(uVar12,uVar11,0);
      uVar11 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_HashSet<INetworkUpdateSystem>_CopyTo__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar11);
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
      puVar13 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_05cf0228;
    }
  }
LAB_05cf020c:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)puVar3,0);
FUN_05cf0228:
  uVar11 = (*(code *)*puVar13)(plVar8);
  FUN_05d01104(0);
  return uVar11;
}


