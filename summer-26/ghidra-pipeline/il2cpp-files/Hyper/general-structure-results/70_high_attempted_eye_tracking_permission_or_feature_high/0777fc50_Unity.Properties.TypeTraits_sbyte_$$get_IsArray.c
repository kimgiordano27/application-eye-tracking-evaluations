/*
FUNCTION_NAME: Unity.Properties.TypeTraits<sbyte>$$get_IsArray
ENTRY_POINT: 0777fc50
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;pose_vector;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void Unity_Properties_TypeTraits<sbyte>__get_IsArray(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar13;
  long lVar14;
  
                    /* try { // try from 0777fc50 to 0787fc53 has its CatchHandler @ 0777fca8 */
                    /* try { // try from 0777fc54 to 0787fc8f has its CatchHandler @ 0777fb4c */
  *(undefined8 *)(unaff_x19 + 0x2e4) = *in_x9;
  *(undefined8 *)(unaff_x19 + 0x2f0) = **(undefined8 **)(param_1 + 0xb8);
  iVar1 = *(int *)(param_2 + 0xe4);
  puVar13 = *(undefined8 **)(unaff_x21 + 0x780);
  *(undefined4 *)(unaff_x19 + 0x2f8) = 2;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_0a2cc5e4();
                    /* try { // try from 0777fc90 to 0787fc93 has its CatchHandler @ 0777fcb4 */
                    /* try { // try from 0777fc94 to 0787fc9f has its CatchHandler @ 0777fca8 */
  FUN_0a404064();
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 0777fba0 with catch @ 0777fca0
                       try { // try from 0777fca0 to 0787fcd3 has its CatchHandler @ 0777fb4c */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 0777fb80 with catch @ 0777fca4
                        */
  uVar4 = thunk_FUN_04983f60(*puVar13);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 0777fc50 with catch @ 0777fca8
                       catch(type#1 @ 0a568bf8) { ... } // from try @ 0777fc94 with catch @ 0777fca8
                        */
  FUN_0a2fdfb0(uVar4,0);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 0777fbc4 with catch @ 0777fcb4
                       catch(type#1 @ 0a568bf8) { ... } // from try @ 0777fc90 with catch @ 0777fcb4
                        */
  plVar10 = (long *)(unaff_x19 + 0x2c8);
  *(undefined8 *)(unaff_x19 + 0x2c8) = uVar4;
  thunk_FUN_049ee3d8(plVar10,uVar4);
  lVar5 = *(long *)(unaff_x19 + 0x2c8);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x310) = 1;
    plVar6 = (long *)FUN_0a2ff17c(lVar5,0);
    puVar2 = PTR_DAT_0ac45128;
    if (plVar6 == (long *)0x0) goto LAB_07780710;
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac45128) {
          puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0777fd3c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac45128,1);
LAB_0777fd3c:
    (*(code *)*puVar13)(plVar6,1,puVar13[1]);
    if ((*plVar10 == 0) ||
       (plVar6 = (long *)FUN_0a2fb550(*plVar10,0), puVar3 = PTR_DAT_0ac40778, plVar6 == (long *)0x0)
       ) goto LAB_07780710;
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac40778) {
          puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0777fdbc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac40778,3);
LAB_0777fdbc:
    (*(code *)*puVar13)(plVar6,0,puVar13[1]);
    if ((*plVar10 == 0) || (plVar6 = (long *)FUN_0a2ff17c(*plVar10,0), plVar6 == (long *)0x0))
    goto LAB_07780710;
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0777fe34;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar2,1);
LAB_0777fe34:
    (*(code *)*puVar13)(plVar6,1,puVar13[1]);
    if ((*plVar10 == 0) || (plVar6 = (long *)FUN_0a2ff17c(*plVar10,0), plVar6 == (long *)0x0))
    goto LAB_07780710;
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
          goto LAB_0777feac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar2,0xe);
LAB_0777feac:
    (*(code *)*puVar13)(plVar6,1,puVar13[1]);
    if ((*plVar10 == 0) || (plVar6 = (long *)FUN_0a2ff17c(*plVar10,0), plVar6 == (long *)0x0))
    goto LAB_07780710;
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
          goto LAB_0777ff24;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar2,0x10);
LAB_0777ff24:
    (*(code *)*puVar13)(plVar6,1,puVar13[1]);
    if (*plVar10 == 0) goto LAB_07780710;
    FUN_0a2febdc(*plVar10,0,0);
    if (*plVar10 == 0) goto LAB_07780710;
    Hyper_VRModule_VRGaze__set_XRGazeInteractor(*plVar10,0,0);
    if ((*plVar10 == 0) ||
       (plVar6 = (long *)FUN_0a2fb550(*plVar10,0), puVar2 = PTR_DAT_0ac0fe10, plVar6 == (long *)0x0)
       ) goto LAB_07780710;
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
          goto LAB_0777ffcc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0xc);
LAB_0777ffcc:
    uVar4 = (*(code *)*puVar13)(plVar6,puVar13[1]);
    uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_063dfe68();
    lVar5 = FUN_08dc2b6c(uVar4,uVar7,0);
    lVar14 = *(long *)puVar3;
    if (lVar5 == 0) {
      lVar8 = 0;
    }
    else {
      uVar4 = *(undefined8 *)puVar2;
      lVar8 = thunk_FUN_04983e64(lVar5,uVar4);
      if (lVar8 == 0) goto FUN_07780170;
    }
    lVar5 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) {
          puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
          goto LAB_07780088;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_04980e68(plVar6,lVar14,0xd);
LAB_07780088:
    (*(code *)*puVar13)(plVar6,lVar8,puVar13[1]);
    if ((*plVar10 != 0) &&
       (plVar6 = (long *)FUN_0a2fb550(*plVar10,0), puVar2 = PTR_DAT_0ac09cd0, plVar6 != (long *)0x0)
       ) {
      lVar5 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
            goto LAB_07780108;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0xe);
LAB_07780108:
      uVar4 = (*(code *)*puVar13)(plVar6,puVar13[1]);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
      FUN_05f878c4();
      lVar5 = FUN_08dc2b6c(uVar4,uVar7,0);
      lVar14 = *(long *)puVar3;
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        uVar4 = *(undefined8 *)puVar2;
        lVar8 = thunk_FUN_04983e64(lVar5,uVar4);
        if (lVar8 == 0) {
FUN_07780170:
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(lVar5,uVar4);
        }
      }
      lVar5 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar14) {
            puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
            goto LAB_077801d0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)FUN_04980e68(plVar6,lVar14,0xf);
LAB_077801d0:
      (*(code *)*puVar13)(plVar6,lVar8,puVar13[1]);
      if ((*plVar10 != 0) &&
         (plVar6 = (long *)FUN_0a2fb550(*plVar10,0), puVar2 = PTR_DAT_0ac09d30,
         plVar6 != (long *)0x0)) {
        lVar5 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
              goto LAB_07780250;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0x10);
LAB_07780250:
        uVar4 = (*(code *)*puVar13)(plVar6,puVar13[1]);
        uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_08cc3ad0();
        plVar9 = (long *)FUN_08dc2b6c(uVar4,uVar7,0);
        if ((plVar9 != (long *)0x0) && (lVar5 = *(long *)puVar2, *plVar9 != lVar5)) {
LAB_07780714:
                    /* WARNING: Subroutine does not return */
          FUN_0494850c(plVar9,lVar5);
        }
        lVar5 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x11) * 0x10 + 0x138);
              goto LAB_07780300;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0x11);
LAB_07780300:
        (*(code *)*puVar13)(plVar6,plVar9,puVar13[1]);
        if ((*plVar10 != 0) && (plVar6 = (long *)FUN_0a2fb550(*plVar10,0), plVar6 != (long *)0x0)) {
          lVar5 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x12) * 0x10 + 0x138);
                goto LAB_07780378;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0x12);
LAB_07780378:
          uVar4 = (*(code *)*puVar13)(plVar6,puVar13[1]);
          uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
          FUN_08cc3ad0();
          plVar9 = (long *)FUN_08dc2b6c(uVar4,uVar7,0);
          if ((plVar9 != (long *)0x0) && (lVar5 = *(long *)puVar2, *plVar9 != lVar5))
          goto LAB_07780714;
          lVar5 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
                goto LAB_07780428;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0x13);
LAB_07780428:
          (*(code *)*puVar13)(plVar6,plVar9,puVar13[1]);
          if ((*plVar10 != 0) && (plVar6 = (long *)FUN_0a2fb550(*plVar10,0), plVar6 != (long *)0x0))
          {
            lVar5 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x14) * 0x10 + 0x138);
                  goto LAB_077804a0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0x14);
LAB_077804a0:
            uVar4 = (*(code *)*puVar13)(plVar6,puVar13[1]);
            uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
            FUN_08cc3ad0();
            plVar9 = (long *)FUN_08dc2b6c(uVar4,uVar7,0);
            if ((plVar9 != (long *)0x0) && (lVar5 = *(long *)puVar2, *plVar9 != lVar5))
            goto LAB_07780714;
            lVar5 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                  puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
                  goto LAB_07780550;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_04980e68(plVar6,*(long *)puVar3,0x15);
LAB_07780550:
            (*(code *)*puVar13)(plVar6,plVar9,puVar13[1]);
            puVar2 = PTR_DAT_0ac3a2c0;
            if (*plVar10 != 0) {
              plVar10 = (long *)FUN_0a2fb550(*plVar10,0);
              uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
              FUN_063d4f5c();
              if (plVar10 != (long *)0x0) {
                lVar5 = *plVar10;
                uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                      puVar13 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
                      goto LAB_077805f8;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)FUN_04980e68(plVar10,*(long *)puVar3,0x17);
LAB_077805f8:
                (*(code *)*puVar13)(plVar10,uVar4,puVar13[1]);
                lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_04980b34();
                }
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                puVar2 = PTR_DAT_0ac45130;
                if ((*(ushort *)
                      (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
                    == 0) {
                  FUN_04980b34();
                }
                puVar3 = PTR_DAT_0ac45120;
                FUN_0a2ce770();
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                FUN_0a2cc270();
                FUN_07780b24();
                thunk_FUN_04983f60(*(undefined8 *)puVar3);
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
  }
LAB_07780710:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


