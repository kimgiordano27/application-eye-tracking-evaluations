/*
FUNCTION_NAME: System.Collections.Generic.EnumEqualityComparer<__Il2CppFullySharedGenericStructType>$$Equals
ENTRY_POINT: 020af3d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x020af708) */
/* WARNING: Removing unreachable block (ram,0x020af5e4) */
/* WARNING: Removing unreachable block (ram,0x020af830) */
/* WARNING: Removing unreachable block (ram,0x020af64c) */
/* WARNING: Removing unreachable block (ram,0x020af828) */

void System_Collections_Generic_EnumEqualityComparer<__Il2CppFullySharedGenericStructType>__Equals
               (long param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lStack_50;
  int iStack_44;
  long lStack_40;
  int iStack_38;
  int iStack_34;
  long lStack_30;
  char acStack_24 [4];
  int iStack_20;
  int iStack_1c;
  long lStack_18;
  long lStack_10;
  long lStack_8;
  
  lStack_50 = tpidr_el0;
  lStack_8 = *(long *)(lStack_50 + 0x28);
  if ((DAT_04121e37 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(PTR_DAT_03cda250);
    DAT_04121e37 = 1;
  }
  plVar8 = (long *)PTR_DAT_03cbdee0;
  puVar5 = (undefined8 *)
           ((long)&lStack_50 -
           ((ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88) + 0xfc) +
            0xf & 0x1fffffff0));
  acStack_24[0] = '\0';
  iVar2 = FUN_020af8cc();
  iVar3 = param_4;
  if (iVar2 != 1) {
    if (*(int *)(*plVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar3 = -0x80000000;
    if ((float)(int)((float)param_4 / (float)iVar2) != INFINITY) {
      iVar3 = (int)((float)param_4 / (float)iVar2);
    }
  }
  iVar2 = param_4 + -1;
  if (0 < param_4) {
    iVar6 = 0;
    lVar9 = 0;
    iStack_38 = iVar3 + -1;
    lStack_40 = 0;
    iStack_44 = iVar2;
    do {
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar3 = FUN_0276c214(iStack_38 + iVar6,iVar2,0);
      if (iVar3 == iVar2) {
        for (; iVar6 < param_4; iVar6 = iVar6 + 1) {
          lStack_30 = lVar9;
          FUN_01f66c74(param_3,iVar6,puVar5,
                       *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x80));
          if (param_2 == 0) goto LAB_020af824;
          puVar4 = puVar5;
          if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88) + 0x28)) {
            puVar4 = (undefined8 *)*puVar5;
          }
          iStack_20 = param_4;
          iStack_1c = iVar6;
          (**(code **)(param_2 + 0x18))
                    (*(undefined8 *)(param_2 + 0x40),puVar4,&iStack_1c,&iStack_20,
                     *(undefined8 *)(param_2 + 0x28));
          lVar9 = lStack_30;
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        acStack_24[0] = '\0';
        iStack_34 = iVar3;
        FUN_027e0bd8(uVar7,acStack_24,0);
        if (*(long *)(param_1 + 0x10) == 0) {
          lStack_30 = lVar9;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(param_1 + 0x10),&lStack_18,*(undefined8 *)PTR_DAT_03cda250);
        lStack_30 = lStack_18;
        if (acStack_24[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        acStack_24[0] = '\0';
        FUN_027e0bd8(uVar7,acStack_24,0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(param_1 + 0x18),&lStack_10,
                     *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xa8));
        lStack_40 = lStack_10;
        if (acStack_24[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        lVar9 = lStack_40;
        if ((lStack_40 == 0) ||
           (FUN_0221e108(lStack_40,iVar6,iStack_34,param_3,param_4,param_2,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xb8)),
           lVar1 = lStack_30, lStack_30 == 0)) {
LAB_020af824:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        *(long *)(lStack_30 + 0x18) = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lStack_30 + 0x18),lVar9);
        *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        FUN_020afa8c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xc0));
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        acStack_24[0] = '\0';
        FUN_027e0bd8(uVar7,acStack_24,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (acStack_24[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        lVar9 = lStack_30;
        FUN_027e13f4(*(undefined8 *)(param_1 + 0x30),lStack_30,0);
        plVar8 = (long *)PTR_DAT_03cbdee0;
        iVar2 = iStack_44;
        iVar3 = iStack_34;
      }
      iVar6 = iVar3 + 1;
    } while (iVar6 < param_4);
  }
  FUN_020af954(param_1,0xffffffff,0,
               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 200));
  if (*(long *)(lStack_50 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


