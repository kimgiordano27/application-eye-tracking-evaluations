/*
FUNCTION_NAME: FUN_035d7860
ENTRY_POINT: 035d7860
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4
*/


void FUN_035d7860(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_086d85ae & 1) == 0) {
    FUN_0335b6c8(&DAT_08405b90,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08406080,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_08406138,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f6b28,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f6b30,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086d85ae = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0xf90), lVar5 != 0)) {
    if (DAT_086f1fd0 == (code *)0x0) {
      DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
    }
    (*DAT_086f1fd0)(lVar5,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a119fc(uVar6,0,0);
      if ((uVar2 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          iVar4 = 0;
          while ((*(long *)(lVar5 + 0xb0) != 0 &&
                 (lVar5 = *(long *)(*(long *)(lVar5 + 0xb0) + 0x30), lVar5 != 0))) {
            if (*(int *)(lVar5 + 0x18) <= iVar4) {
              iVar4 = 0;
              goto LAB_035d7c40;
            }
            lVar5 = FUN_04ab0b48(lVar5,iVar4,DAT_083f6b30);
            if (((lVar5 == 0) || (*(long *)(param_1 + 0x20) == 0)) || (*(long *)(lVar5 + 0x10) == 0)
               ) break;
            FUN_07a0a6b0(*(long *)(lVar5 + 0x10),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x9c0),
                         0);
            if (((*(long *)(param_1 + 0x20) == 0) ||
                (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0), lVar5 == 0)) ||
               ((lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0 ||
                ((lVar5 = FUN_04ab0b48(lVar5,iVar4,DAT_083f6b30), lVar5 == 0 ||
                 (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)))))) break;
            if (DAT_086f1fd0 == (code *)0x0) {
              DAT_086f1fd0 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Collider::set_enabled(System.Boolean)"
                                                 );
            }
            (*DAT_086f1fd0)(lVar5,1);
            lVar5 = *(long *)(param_1 + 0x20);
            iVar4 = iVar4 + 1;
            if (lVar5 == 0) break;
          }
        }
      }
      else {
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar5 = (*DAT_086ef188)(param_1);
        if ((lVar5 != 0) && (lVar5 = FUN_03c8a978(lVar5,DAT_08406080), lVar5 != 0)) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            lVar8 = 0;
            do {
              if (uVar1 <= (uint)lVar8) goto LAB_035d7d0c;
              lVar7 = *(long *)(lVar5 + 0x20 + lVar8 * 8);
              if (lVar7 == 0) goto LAB_035d7d08;
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar6 = (*DAT_086ef188)(lVar7);
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar3 = (*DAT_086ef188)(param_1);
              if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                FUN_033b9870(DAT_083cf7d8);
              }
              uVar2 = FUN_07a0d2c4(uVar6,uVar3,0);
              if ((uVar2 & 1) != 0) {
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_035d7d08;
                FUN_07a0a6b0(lVar7,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x9c0),0);
                if (DAT_086f1fd0 == (code *)0x0) {
                  DAT_086f1fd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Collider::set_enabled(System.Boolean)"
                                                  );
                }
                (*DAT_086f1fd0)(lVar7,1);
              }
              uVar1 = *(uint *)(lVar5 + 0x18);
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < (int)uVar1);
          }
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          lVar5 = (*DAT_086ef188)(param_1);
          if ((lVar5 != 0) && (lVar5 = FUN_03c8a978(lVar5,DAT_08406138), lVar5 != 0)) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (0 < (int)uVar1) {
              lVar8 = 0;
              do {
                if (uVar1 <= (uint)lVar8) {
LAB_035d7d0c:
                    /* WARNING: Subroutine does not return */
                  FUN_033d1d44();
                }
                lVar7 = *(long *)(lVar5 + 0x20 + lVar8 * 8);
                if (lVar7 == 0) goto LAB_035d7d08;
                if (DAT_086f1e48 == (code *)0x0) {
                  DAT_086f1e48 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_isKinematic(System.Boolean)"
                                                  );
                }
                (*DAT_086f1e48)(lVar7,0);
                uVar1 = *(uint *)(lVar5 + 0x18);
                lVar8 = lVar8 + 1;
              } while ((int)lVar8 < (int)uVar1);
            }
            return;
          }
        }
      }
    }
  }
LAB_035d7d08:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
LAB_035d7c40:
  if (*(int *)(lVar5 + 0x18) <= iVar4) {
    return;
  }
  lVar5 = FUN_04ab0b48(lVar5,iVar4,DAT_083f6b30);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) ||
     (lVar5 = FUN_03c89df4(*(long *)(lVar5 + 0x10),DAT_08405b90), lVar5 == 0)) goto LAB_035d7d08;
  if (DAT_086f1e48 == (code *)0x0) {
    DAT_086f1e48 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
  }
  (*DAT_086f1e48)(lVar5,0);
  if (((*(long *)(param_1 + 0x20) == 0) ||
      (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0), lVar5 == 0)) ||
     ((lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0 ||
      ((lVar5 = FUN_04ab0b48(lVar5,iVar4,DAT_083f6b30), lVar5 == 0 ||
       (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)))))) goto LAB_035d7d08;
  if (DAT_086f1fd0 == (code *)0x0) {
    DAT_086f1fd0 = (code *)FUN_033d1b68("UnityEngine.Collider::set_enabled(System.Boolean)");
  }
  (*DAT_086f1fd0)(lVar5,1);
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0xb0), lVar5 == 0)) goto LAB_035d7d08;
  lVar5 = *(long *)(lVar5 + 0x30);
  iVar4 = iVar4 + 1;
  if (lVar5 == 0) goto LAB_035d7d08;
  goto LAB_035d7c40;
}


