/*
FUNCTION_NAME: Unity.Properties.TypeTraits<Rect>$$get_IsArray
ENTRY_POINT: 0777c4d0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;pose_vector;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void Unity_Properties_TypeTraits<Rect>__get_IsArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar11;
  undefined8 *unaff_x26;
  undefined8 uVar12;
  long *unaff_x27;
  
  lVar3 = FUN_08dc2b6c();
  lVar11 = *unaff_x27;
  if (lVar3 != 0) {
    uVar12 = *unaff_x26;
    lVar4 = thunk_FUN_04983e64(lVar3,uVar12);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(lVar3,uVar12);
    }
  }
  lVar3 = *unaff_x22;
                    /* try { // try from 0777c508 to 0787c543 has its CatchHandler @ 0777c394 */
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar11) {
                    /* try { // try from 0777c544 to 0787c547 has its CatchHandler @ 0777c564 */
                    /* try { // try from 0777c548 to 0787c54b has its CatchHandler @ 0777c560 */
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0xf) * 0x10 + 0x138);
        goto LAB_0777c554;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_04980e68();
LAB_0777c554:
  (*(code *)*puVar5)();
  if ((*unaff_x21 != 0) &&
     (plVar6 = (long *)FUN_0a2fb550(*unaff_x21,0), puVar1 = PTR_DAT_0ac09d30, plVar6 != (long *)0x0)
     ) {
    lVar3 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x10) * 0x10 + 0x138);
          goto LAB_0777c5d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x27,0x10);
LAB_0777c5d4:
    uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_08cc3ad0();
    plVar8 = (long *)FUN_08dc2b6c(uVar12,uVar7,0);
    if ((plVar8 != (long *)0x0) && (lVar3 = *(long *)puVar1, *plVar8 != lVar3)) {
LAB_0777ca98:
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(plVar8,lVar3);
    }
    lVar3 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x11) * 0x10 + 0x138);
          goto LAB_0777c684;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x27,0x11);
LAB_0777c684:
    (*(code *)*puVar5)(plVar6,plVar8,puVar5[1]);
    if ((*unaff_x21 != 0) && (plVar6 = (long *)FUN_0a2fb550(*unaff_x21,0), plVar6 != (long *)0x0)) {
      lVar3 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
            goto LAB_0777c6fc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x27,0x12);
LAB_0777c6fc:
      uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_08cc3ad0();
      plVar8 = (long *)FUN_08dc2b6c(uVar12,uVar7,0);
      if ((plVar8 != (long *)0x0) && (lVar3 = *(long *)puVar1, *plVar8 != lVar3)) goto LAB_0777ca98;
      lVar3 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x13) * 0x10 + 0x138);
            goto LAB_0777c7ac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x27,0x13);
LAB_0777c7ac:
      (*(code *)*puVar5)(plVar6,plVar8,puVar5[1]);
      if ((*unaff_x21 != 0) && (plVar6 = (long *)FUN_0a2fb550(*unaff_x21,0), plVar6 != (long *)0x0))
      {
        lVar3 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x14) * 0x10 + 0x138);
              goto LAB_0777c824;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x27,0x14);
LAB_0777c824:
        uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_08cc3ad0();
        plVar8 = (long *)FUN_08dc2b6c(uVar12,uVar7,0);
        if ((plVar8 != (long *)0x0) && (lVar3 = *(long *)puVar1, *plVar8 != lVar3))
        goto LAB_0777ca98;
        lVar3 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
              goto LAB_0777c8d4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x27,0x15);
LAB_0777c8d4:
        (*(code *)*puVar5)(plVar6,plVar8,puVar5[1]);
        puVar1 = PTR_DAT_0ac3a2c0;
        if (*unaff_x21 != 0) {
          plVar6 = (long *)FUN_0a2fb550(*unaff_x21,0);
          uVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_063d4f5c();
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *unaff_x27) {
                  puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
                  goto LAB_0777c97c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x27,0x17);
LAB_0777c97c:
            (*(code *)*puVar5)(plVar6,uVar12,puVar5[1]);
            lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_04980b34();
            }
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            puVar1 = PTR_DAT_0ac45130;
            if ((*(ushort *)
                  (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1) ==
                0) {
              FUN_04980b34();
            }
            puVar2 = PTR_DAT_0ac45120;
            FUN_0a2ce770();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_0a2cc270();
            FUN_0777cea8();
            thunk_FUN_04983f60(*(undefined8 *)puVar2);
            FUN_0633b8fc();
            FUN_05af132c();
            Hyper_VRModule_VRGaze__set_XRGazeInteractor();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


