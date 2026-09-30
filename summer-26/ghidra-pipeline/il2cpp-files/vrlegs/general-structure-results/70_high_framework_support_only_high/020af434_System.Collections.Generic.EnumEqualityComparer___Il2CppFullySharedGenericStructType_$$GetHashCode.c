/*
FUNCTION_NAME: System.Collections.Generic.EnumEqualityComparer<__Il2CppFullySharedGenericStructType>$$GetHashCode
ENTRY_POINT: 020af434
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x020af708) */
/* WARNING: Removing unreachable block (ram,0x020af5e4) */
/* WARNING: Removing unreachable block (ram,0x020af830) */
/* WARNING: Removing unreachable block (ram,0x020af64c) */
/* WARNING: Removing unreachable block (ram,0x020af828) */

void System_Collections_Generic_EnumEqualityComparer<__Il2CppFullySharedGenericStructType>__GetHashCode
               (void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x29;
  
  plVar9 = (long *)PTR_DAT_03cbdee0;
  uVar1 = *(uint *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88) + 0xfc);
  *(undefined1 *)(unaff_x29 + -0x24) = 0;
  iVar2 = FUN_020af8cc();
  iVar3 = unaff_w21;
  if (iVar2 != 1) {
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar3 = -0x80000000;
    if ((float)(int)((float)unaff_w21 / (float)iVar2) != INFINITY) {
      iVar3 = (int)((float)unaff_w21 / (float)iVar2);
    }
  }
  iVar2 = unaff_w21 + -1;
  if (0 < unaff_w21) {
    iVar5 = 0;
    uVar10 = 0;
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(int *)(unaff_x29 + -0x38) = iVar3 + -1;
    *(int *)(unaff_x29 + -0x44) = iVar2;
    do {
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      iVar3 = FUN_0276c214(*(int *)(unaff_x29 + -0x38) + iVar5,iVar2,0);
      if (iVar3 == iVar2) {
        if (iVar5 < unaff_w21) {
          *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
          do {
            FUN_01f66c74();
            if (unaff_x23 == 0) goto LAB_020af824;
            puVar4 = (undefined8 *)(&stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
            if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88) + 0x28
                             )) {
              puVar4 = *(undefined8 **)(&stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
            }
            *(int *)(unaff_x29 + -0x20) = unaff_w21;
            *(int *)(unaff_x29 + -0x1c) = iVar5;
            (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),puVar4,unaff_x29 + -0x1c,unaff_x29 + -0x20,
                       *(undefined8 *)(unaff_x23 + 0x28));
            iVar5 = iVar5 + 1;
          } while (iVar5 < unaff_w21);
          uVar10 = *(undefined8 *)(unaff_x29 + -0x30);
        }
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        *(int *)(unaff_x29 + -0x34) = iVar3;
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar7,unaff_x29 + -0x24,0);
        if (*(long *)(unaff_x20 + 0x10) == 0) {
          *(undefined8 *)(unaff_x29 + -0x30) = uVar10;
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(unaff_x20 + 0x10),unaff_x29 + -0x18,*(undefined8 *)PTR_DAT_03cda250);
        *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x18);
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
        }
        uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar10,unaff_x29 + -0x24,0);
        if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0207ee14(*(long *)(unaff_x20 + 0x18),unaff_x29 + -0x10,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
        }
        lVar8 = *(long *)(unaff_x29 + -0x40);
        if (lVar8 == 0) {
LAB_020af824:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_0221e108(lVar8,iVar5,*(undefined4 *)(unaff_x29 + -0x34));
        lVar6 = *(long *)(unaff_x29 + -0x30);
        if (lVar6 == 0) goto LAB_020af824;
        *(long *)(lVar6 + 0x18) = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar6 + 0x18),lVar8);
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(unaff_x20 + 0x38);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        FUN_020afa8c();
        uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
        *(undefined1 *)(unaff_x29 + -0x24) = 0;
        FUN_027e0bd8(uVar10,unaff_x29 + -0x24,0);
        *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
        if (*(char *)(unaff_x29 + -0x24) != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
        }
        uVar10 = *(undefined8 *)(unaff_x29 + -0x30);
        FUN_027e13f4(*(undefined8 *)(unaff_x20 + 0x30),uVar10,0);
        iVar2 = *(int *)(unaff_x29 + -0x44);
        iVar3 = *(int *)(unaff_x29 + -0x34);
        plVar9 = (long *)PTR_DAT_03cbdee0;
      }
      iVar5 = iVar3 + 1;
    } while (iVar5 < unaff_w21);
  }
  FUN_020af954();
  if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


