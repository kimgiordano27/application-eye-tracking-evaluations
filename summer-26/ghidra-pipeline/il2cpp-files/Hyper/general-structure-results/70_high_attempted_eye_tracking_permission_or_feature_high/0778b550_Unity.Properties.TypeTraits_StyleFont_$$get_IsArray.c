/*
FUNCTION_NAME: Unity.Properties.TypeTraits<StyleFont>$$get_IsArray
ENTRY_POINT: 0778b550
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;pose_vector;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void Unity_Properties_TypeTraits<StyleFont>__get_IsArray(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar12;
  undefined8 *unaff_x26;
  long *unaff_x27;
  
  uVar3 = thunk_FUN_04983f60(param_1);
  FUN_063dfe68();
  lVar4 = FUN_08dc2b6c(param_2,uVar3,0);
  lVar12 = *unaff_x27;
  if (lVar4 != 0) {
    uVar3 = *unaff_x26;
    lVar5 = thunk_FUN_04983e64(lVar4,uVar3);
                    /* try { // try from 0778b5a0 to 0788b633 has its CatchHandler @ 0778b5a0
                       catch() { ... } // from try @ 0778b5a0 with catch @ 0778b5a0
                       catch() { ... } // from try @ 0778b66c with catch @ 0778b5a0
                       catch() { ... } // from try @ 0778b68c with catch @ 0778b5a0
                       catch() { ... } // from try @ 0778b704 with catch @ 0778b5a0
                       catch() { ... } // from try @ 0778b750 with catch @ 0778b5a0
                       catch() { ... } // from try @ 0778b784 with catch @ 0778b5a0 */
    if (lVar5 == 0) goto LAB_0778b6e4;
  }
  lVar4 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar12) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
        goto LAB_0778b5fc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68();
LAB_0778b5fc:
  (*(code *)*puVar6)();
  if ((*unaff_x21 != 0) &&
     (plVar7 = (long *)FUN_0a2fb550(*unaff_x21,0), puVar1 = PTR_DAT_0ac09cd0, plVar7 != (long *)0x0)
     ) {
    lVar4 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xe) * 0x10 + 0x138);
          goto LAB_0778b67c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0xe);
LAB_0778b67c:
    uVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_05f878c4();
    lVar4 = FUN_08dc2b6c(uVar3,uVar8,0);
    lVar12 = *unaff_x27;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar3 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_04983e64(lVar4,uVar3);
      if (lVar5 == 0) {
LAB_0778b6e4:
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar4,uVar3);
      }
    }
    lVar4 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
          goto LAB_0778b744;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_04980e68(plVar7,lVar12,0xf);
LAB_0778b744:
    (*(code *)*puVar6)(plVar7,lVar5,puVar6[1]);
    if ((*unaff_x21 != 0) &&
       (plVar7 = (long *)FUN_0a2fb550(*unaff_x21,0), puVar1 = PTR_DAT_0ac09d30,
       plVar7 != (long *)0x0)) {
      lVar4 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
            goto LAB_0778b7c4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0x10);
LAB_0778b7c4:
      uVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_08cc3ad0();
      plVar9 = (long *)FUN_08dc2b6c(uVar3,uVar8,0);
      if ((plVar9 != (long *)0x0) && (lVar4 = *(long *)puVar1, *plVar9 != lVar4)) {
LAB_0778bc88:
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar9,lVar4);
      }
      lVar4 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x11) * 0x10 + 0x138);
            goto LAB_0778b874;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0x11);
LAB_0778b874:
      (*(code *)*puVar6)(plVar7,plVar9,puVar6[1]);
      if ((*unaff_x21 != 0) && (plVar7 = (long *)FUN_0a2fb550(*unaff_x21,0), plVar7 != (long *)0x0))
      {
        lVar4 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x12) * 0x10 + 0x138);
              goto LAB_0778b8ec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0x12);
LAB_0778b8ec:
        uVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_08cc3ad0();
        plVar9 = (long *)FUN_08dc2b6c(uVar3,uVar8,0);
        if ((plVar9 != (long *)0x0) && (lVar4 = *(long *)puVar1, *plVar9 != lVar4))
        goto LAB_0778bc88;
        lVar4 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x13) * 0x10 + 0x138);
              goto LAB_0778b99c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0x13);
LAB_0778b99c:
        (*(code *)*puVar6)(plVar7,plVar9,puVar6[1]);
        if ((*unaff_x21 != 0) &&
           (plVar7 = (long *)FUN_0a2fb550(*unaff_x21,0), plVar7 != (long *)0x0)) {
          lVar4 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x27) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
                goto LAB_0778ba14;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0x14);
LAB_0778ba14:
          uVar3 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_08cc3ad0();
          plVar9 = (long *)FUN_08dc2b6c(uVar3,uVar8,0);
          if ((plVar9 != (long *)0x0) && (lVar4 = *(long *)puVar1, *plVar9 != lVar4))
          goto LAB_0778bc88;
          lVar4 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x27) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x15) * 0x10 + 0x138);
                goto LAB_0778bac4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0x15);
LAB_0778bac4:
          (*(code *)*puVar6)(plVar7,plVar9,puVar6[1]);
          puVar1 = PTR_DAT_0ac3a2c0;
          if (*unaff_x21 != 0) {
            plVar7 = (long *)FUN_0a2fb550(*unaff_x21,0);
            uVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_063d4f5c();
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x27) {
                    puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
                    goto LAB_0778bb6c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x27,0x17);
LAB_0778bb6c:
              (*(code *)*puVar6)(plVar7,uVar3,puVar6[1]);
              lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_04980b34();
              }
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              puVar1 = PTR_DAT_0ac45130;
              if ((*(ushort *)
                    (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
                  == 0) {
                FUN_04980b34();
              }
              puVar2 = PTR_DAT_0ac45120;
              FUN_0a2ce770();
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_049a583c();
              }
              FUN_0a2cc270();
              FUN_0778c098();
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


