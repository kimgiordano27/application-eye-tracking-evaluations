/*
FUNCTION_NAME: Unity.Properties.TypeTraits<StyleTranslate>$$get_IsArray
ENTRY_POINT: 07796e50
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;pose_vector;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void Unity_Properties_TypeTraits<StyleTranslate>__get_IsArray(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long *unaff_x24;
  long *unaff_x26;
  
  (*(code *)*param_1)();
  plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18)
                   )();
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
          goto LAB_07796ee4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x26,0x12);
LAB_07796ee4:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    uVar6 = thunk_FUN_04983f60(*unaff_x24);
    FUN_08cc3ad0();
    plVar7 = (long *)FUN_08dc2b6c(uVar5,uVar6,0);
    if ((plVar7 != (long *)0x0) && (lVar8 = *unaff_x24, *plVar7 != lVar8)) {
LAB_07797294:
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(plVar7,lVar8);
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x13) * 0x10 + 0x138);
          goto LAB_07796f94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x26,0x13);
LAB_07796f94:
    (*(code *)*puVar4)(plVar3,plVar7,puVar4[1]);
    plVar3 = (long *)(*(code *)**(undefined8 **)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18))();
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x14) * 0x10 + 0x138);
            goto LAB_07797014;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x26,0x14);
LAB_07797014:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      uVar6 = thunk_FUN_04983f60(*unaff_x24);
      FUN_08cc3ad0();
      plVar7 = (long *)FUN_08dc2b6c(uVar5,uVar6,0);
      puVar1 = PTR_DAT_0ac3a2c0;
      if ((plVar7 != (long *)0x0) && (lVar8 = *unaff_x24, *plVar7 != lVar8)) goto LAB_07797294;
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
            goto LAB_077970cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x26,0x15);
LAB_077970cc:
      (*(code *)*puVar4)(plVar3,plVar7,puVar4[1]);
      plVar3 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18))();
      uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_063d4f5c();
      if (plVar3 != (long *)0x0) {
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
              goto LAB_07797174;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x26,0x17);
LAB_07797174:
        (*(code *)*puVar4)(plVar3,uVar5,puVar4[1]);
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_04980b34();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        puVar1 = PTR_DAT_0ac45130;
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) &
            1) == 0) {
          FUN_04980b34();
        }
        puVar2 = PTR_DAT_0ac45120;
        FUN_0a2ce770();
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_0a2cc270();
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70))();
        thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_0633b8fc();
        FUN_05af132c();
        Hyper_VRModule_VRGaze__set_XRGazeInteractor();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


