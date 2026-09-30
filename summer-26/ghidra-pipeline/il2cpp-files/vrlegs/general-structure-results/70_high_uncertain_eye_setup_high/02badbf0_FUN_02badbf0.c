/*
FUNCTION_NAME: FUN_02badbf0
ENTRY_POINT: 02badbf0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02badecc) */

long * FUN_02badbf0(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  char local_64 [4];
  long *local_58;
  
  if ((DAT_04128ec8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d138d8);
    FUN_01ab69ac(PTR_DAT_03d139c0);
    FUN_01ab69ac(PTR_DAT_03d139c8);
    FUN_01ab69ac(PTR_DAT_03d139d0);
    FUN_01ab69ac(PTR_DAT_03d139d8);
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(PTR_DAT_03cf21b8);
    DAT_04128ec8 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
  local_64[0] = '\0';
  FUN_027e0bd8(param_1,local_64,0);
  uVar6 = uVar6 ^ uVar1;
  lVar7 = FUN_02badf88(param_1,uVar6);
  puVar5 = PTR_DAT_03d139d8;
  puVar4 = PTR_DAT_03d139c8;
  puVar3 = PTR_DAT_03d138d8;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (0 < *(int *)(lVar7 + 0x18)) {
    iVar13 = 0;
    do {
      FUN_02215a88(lVar7,iVar13,&local_58,*(undefined8 *)puVar5);
      if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar8 = (long *)(**(code **)(*local_58 + 0x198))(local_58,*(undefined8 *)(*local_58 + 0x1a0))
      ;
      if (plVar8 == (long *)0x0) {
LAB_02badd4c:
        FUN_022190f4(lVar7,iVar13,*(undefined8 *)puVar4);
        iVar13 = iVar13 + -1;
      }
      else {
        lVar12 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar12 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != lVar12))
        goto LAB_02badd4c;
        lVar12 = plVar8[2];
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((int)*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar9 = FUN_025bd20c(*(undefined8 *)
                              (lVar12 + ((*(long *)(lVar12 + 0x18) << 0x20) + -0x100000000 >> 0x1d)
                              + 0x20),param_2,4,0);
        if ((uVar9 & 1) != 0) goto LAB_02bade7c;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(lVar7 + 0x18));
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,
                        *(int *)(*(long *)(param_1 + 0x10) + 0x18) + 1);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02793ce8(lVar10,0,lVar12,0,*(undefined4 *)(lVar10 + 0x18),0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  if (*(uint *)(lVar12 + 0x18) <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar8 = (long *)(lVar12 + ((lVar10 << 0x20) >> 0x1d) + 0x20);
  *plVar8 = (long)param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,param_2);
  plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)puVar3);
  FUN_027b3d9c(plVar8,0);
  plVar8[2] = lVar12;
  *(uint *)(plVar8 + 3) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 2,lVar12);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21b8);
  FUN_027ce35c(uVar11,plVar8,0);
  FUN_01b5f01c(lVar7,uVar11,*(undefined8 *)PTR_DAT_03d139c0);
LAB_02bade7c:
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  return plVar8;
}


