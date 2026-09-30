/*
FUNCTION_NAME: FUN_05c73350
ENTRY_POINT: 05c73350
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x05c73968) */
/* WARNING: Removing unreachable block (ram,0x05c73818) */
/* WARNING: Removing unreachable block (ram,0x05c73bc4) */

void FUN_05c73350(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  
  puVar4 = UnityEngine_RaycastHit2D___var;
  puVar3 = object___var;
  puVar2 = PTR_DAT_065c8d08;
  puVar1 = PTR_DAT_065c8c48;
  plVar5 = (long *)(*(code *)*param_1)();
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05c733e4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)puVar2,0);
LAB_05c733e4:
    uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_05c73ae8;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)System_Tuple<Vector3,_float>_var) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000120_PostfixBurstDelegate__EndInvoke
          ;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)System_Tuple<Vector3,_float>_var,0);

    UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000120_PostfixBurstDelegate__EndInvoke
    :
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (*(int *)(*(long *)PTR_DAT_065dce20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar8 = (long *)FUN_05c70b04(uVar7);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065ed330) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05c734d8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065ed330,0);
LAB_05c734d8:
    plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
LAB_05c734ec:
    lVar11 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05c73538;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0);
LAB_05c73538:
    uVar12 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar12 & 1) != 0) {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065ed338) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05c7359c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065ed338,0);
LAB_05c7359c:
      plVar9 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
      uVar7 = *(undefined8 *)UnityEngine_RaycastHit___var;
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_04f3fb68(uVar7,0);
      uVar7 = FUN_04f5c108(plVar9,uVar7,0,0);
      plVar10 = (long *)FUN_033c4480(uVar7,*(undefined8 *)int___var);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      (**(code **)(*plVar9 + 0x2d8))(plVar9,*(undefined8 *)(*plVar9 + 0x2e0));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)long___var) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05c73674;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)long___var,0);
LAB_05c73674:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
LAB_05c73688:
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05c736d4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,0);
LAB_05c736d4:
      uVar12 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if ((uVar12 & 1) != 0) {
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05c73730;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar3,0);
LAB_05c73730:
        lVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar7 = *(undefined8 *)(lVar11 + 0x10);
        uVar12 = FUN_04679480();
        if ((uVar12 & 1) == 0) {
          FUN_0467928c();
        }
        else {
          uVar7 = FUN_04db9ab4(*(undefined8 *)puVar4,uVar7,plVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_05eb364c(uVar7,0);
        }
        goto LAB_05c73688;
      }
      if (plVar10 != (long *)0x0) {
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05c73808;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065c8a48,0);
LAB_05c73808:
        (*(code *)*puVar6)(plVar10,puVar6[1]);
      }
      goto LAB_05c734ec;
    }
    if (plVar8 != (long *)0x0) {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05c73958;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065c8a48,0);
LAB_05c73958:
      (*(code *)*puVar6)(plVar8,puVar6[1]);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_05c73b04;
    }
  }
LAB_05c73ae8:
  puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065c8a48,0);
LAB_05c73b04:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


