/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$SampleMask
ENTRY_POINT: 05b1f51c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__SampleMask(void)

{
  uint uVar1;
  ushort uVar2;
  bool in_ZR;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  size_t unaff_x20;
  size_t unaff_x21;
  long lVar11;
  void *unaff_x23;
  void *unaff_x24;
  code *pcVar12;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  if (!in_ZR) {
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar8 = thunk_FUN_0322f148();
    uVar9 = thunk_FUN_03257e30(PTR_DAT_075d9dd8);
    FUN_05e01578(uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar8);
  }
  if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  puVar4 = (uint *)thunk_FUN_0324f9d8();
  uVar1 = *puVar4;
  if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  plVar5 = (long *)thunk_FUN_0324f9d8();
  lVar11 = *plVar5;
  if (lVar11 != 0) {
    lVar10 = *unaff_x27;
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar6 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_0322bef4(lVar10);
      uVar2 = *(ushort *)(*unaff_x27 + 0x135);
      lVar6 = *unaff_x27;
    }
    pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x20);
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0322bef4(lVar6);
    }
    uVar3 = (*pcVar12)(lVar11,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
    if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
      FUN_0322bef4(*unaff_x27);
    }
    plVar5 = (long *)thunk_FUN_0324f9d8();
    lVar11 = *plVar5;
    if (lVar11 != 0) {
      if (uVar3 <= uVar1) {
        lVar10 = *unaff_x27;
        uVar2 = *(ushort *)(lVar10 + 0x135);
        lVar6 = lVar10;
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_0322bef4(lVar10);
          uVar2 = *(ushort *)(*unaff_x27 + 0x135);
          lVar6 = *unaff_x27;
        }
        pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x20);
        if ((uVar2 & 1) == 0) {
          lVar6 = FUN_0322bef4(lVar6);
        }
        (*pcVar12)(lVar11,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
        if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
          FUN_0322bef4(*unaff_x27);
        }
        FUN_02d78af4();
        if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        pvVar7 = (void *)thunk_FUN_0324f9d8();
        memset(pvVar7,0,unaff_x21);
        if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        pvVar7 = (void *)thunk_FUN_0324f9d8();
        memset(pvVar7,0,unaff_x20);
LAB_05b1f8b8:
        if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar1 < uVar3);
        }
        return;
      }
      plVar5 = *(long **)(lVar11 + 0x10);
      if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      puVar4 = (uint *)thunk_FUN_0324f9d8();
      if (plVar5 != (long *)0x0) {
        if (*(uint *)(plVar5 + 3) <= *puVar4) {
LAB_05b1f930:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        memcpy(unaff_x24,
               (void *)((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)*puVar4 + 0x20
                       ),unaff_x21);
        if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_031f211c();
        if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        plVar5 = (long *)thunk_FUN_0324f9d8();
        if (*plVar5 != 0) {
          plVar5 = *(long **)(*plVar5 + 0x18);
          if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          puVar4 = (uint *)thunk_FUN_0324f9d8();
          if (plVar5 != (long *)0x0) {
            if (*puVar4 < *(uint *)(plVar5 + 3)) {
              memcpy(unaff_x23,
                     (void *)((long)plVar5 +
                             (ulong)*(uint *)(*plVar5 + 0x104) * (long)(int)*puVar4 + 0x20),
                     unaff_x20);
              if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
                FUN_0322bef4();
              }
              FUN_031f211c();
              if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
                FUN_0322bef4();
              }
              thunk_FUN_0324f9d8();
              if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
                FUN_0322bef4();
              }
              FUN_02d78af4();
              goto LAB_05b1f8b8;
            }
            goto LAB_05b1f930;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


