/*
FUNCTION_NAME: FUN_055bc0e4
ENTRY_POINT: 055bc0e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055bc6dc) */
/* WARNING: Removing unreachable block (ram,0x055bc3c4) */
/* WARNING: Removing unreachable block (ram,0x055bc3c8) */
/* WARNING: Removing unreachable block (ram,0x055bc84c) */
/* WARNING: Removing unreachable block (ram,0x055bc82c) */
/* WARNING: Removing unreachable block (ram,0x055bc550) */

void FUN_055bc0e4(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  uint in_w9;
  ulong in_x10;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  bool bVar17;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  ulong in_stack_00000008;
  long *in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  
code_r0x055bc0e4:
  do {
    if ((in_w9 < (uint)in_x10) ||
       (*(long *)(*(long *)(param_1 + 200) + (in_x10 & 0xffffffff) * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(unaff_x24);
    }
    lVar11 = FUN_055bb6cc();
    if (*(char *)(unaff_x19 + 0xa0) != '\0') {
      if (unaff_x21 == 0) {
System_Runtime_Serialization_XmlWriterDelegator__WriteInt64Array:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
                    /* try { // try from 055bc124 to 056bc127 has its CatchHandler @ 055bc208 */
      lVar15 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 055bc128 to 056bc1bb has its CatchHandler @ 055bbf54 */
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar15 == 0) goto System_Runtime_Serialization_XmlWriterDelegator__WriteInt64Array;
      uVar7 = *(uint *)(unaff_x21 + 0x18);
      if (uVar7 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
        *(long *)(lVar15 + (long)(int)uVar7 * 8 + 0x20) = lVar11;
      }
      else {
        FUN_03abf904();
      }
    }
    if (lVar11 != 0) {
      *(undefined1 *)(lVar11 + 0xb0) = 1;
    }
    do {
      do {
        do {
          do {
            while( true ) {
              if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar9 = FUN_057718f4(in_stack_00000060,0);
              if ((uVar9 & 1) != 0) break;
              plVar12 = (long *)thunk_FUN_02f45174(in_stack_00000060,*(undefined8 *)PTR_DAT_067c91b0
                                                  );
              *in_stack_00000020 = (long)plVar12;
              if (plVar12 != (long *)0x0) {
                lVar11 = *plVar12;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar9 != 0) {
                  piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
                      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_055bc3ac;
                    }
                    uVar9 = uVar9 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar9 != 0);
                }
                puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)PTR_DAT_067c91b0,0);
LAB_055bc3ac:
                (*(code *)*puVar13)(plVar12,puVar13[1]);
              }
LAB_055bbd68:
              do {
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uVar9 = FUN_057718f4(in_stack_00000068,0);
                puVar3 = PTR_DAT_067c91b0;
                if ((uVar9 & 1) == 0) {
                  plVar12 = (long *)thunk_FUN_02f45174(*in_stack_00000030,
                                                       *(undefined8 *)PTR_DAT_067c91b0);
                  *in_stack_00000038 = (long)plVar12;
                  if (plVar12 == (long *)0x0) goto LAB_055bc540;
                  lVar11 = *plVar12;
                  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar9 == 0) goto LAB_055bc518;
                  piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  goto LAB_055bc500;
                }
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                unaff_x23 = (long *)FUN_05771994(in_stack_00000068,0);
              } while (unaff_x23 == (long *)0x0);
              lVar11 = *unaff_x23;
              bVar2 = *(byte *)(lVar11 + 0x130);
              bVar1 = *(byte *)(*unaff_x28 + 0x130);
              if ((bVar2 < bVar1) ||
                 (lVar15 = *(long *)(lVar11 + 200),
                 *(long *)(lVar15 + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(unaff_x23);
              }
              lVar10 = *unaff_x20;
              uVar9 = (ulong)*(byte *)(lVar10 + 0x130);
              if ((*(byte *)(lVar10 + 0x130) <= bVar2) &&
                 (*(long *)(lVar15 + uVar9 * 8 + -8) == lVar10)) {
                if (unaff_x23[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar15 = *(long *)(unaff_x23[0x14] + 0x10);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                if (*(int *)(lVar15 + 0x10) != 0) {
                  if (*(char *)(unaff_x19 + 0xa0) == '\0') goto LAB_055bbd68;
                  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28);
                  uVar14 = FUN_055b7858(unaff_x23,unaff_x23);
                  if (*(int *)(*(long *)Oculus_Interaction_MAction<PokeInteractor>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02f6670c();
                  }
                  uVar14 = FUN_0581a024(uVar14,0);
                  if (*(long *)(unaff_x22 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8(uVar14,uVar14);
                  }
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8(uVar14,uVar14);
                  }
                  lVar11 = FUN_0558c9c4(lVar11,uVar14,
                                        *(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 0x18),0);
                  if (lVar11 != 0) {
                    if (unaff_x21 == 0) {
LAB_055bc834:
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    lVar15 = *(long *)(unaff_x21 + 0x10);
                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_055bc834;
                    uVar7 = *(uint *)(unaff_x21 + 0x18);
                    if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
                      *(long *)(lVar15 + (long)(int)uVar7 * 8 + 0x20) = lVar11;
                    }
                    else {
                      FUN_03abf904();
                    }
                  }
                  lVar11 = *unaff_x20;
                  lVar15 = *unaff_x23;
                  bVar1 = *(byte *)(lVar11 + 0x130);
                  if (*(long *)(unaff_x22 + 200) == 0) {
                    if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08d48(unaff_x23);
                    }
                    if ((long *)unaff_x23[0x17] == (long *)0x0) goto LAB_055bc238;
                    lVar10 = *(long *)unaff_x23[0x17];
                    bVar2 = *(byte *)(*(long *)
                                       System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                                     + 0x130);
                    if ((*(byte *)(lVar10 + 0x130) < bVar2) ||
                       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)
                         System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                       )) goto LAB_055bc238;
                    bVar17 = false;
                  }
                  else {
LAB_055bc238:
                    bVar17 = true;
                  }
                  if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f08d48(unaff_x23);
                  }
                  lVar10 = *unaff_x27;
                  lVar11 = unaff_x23[0xc];
                  lVar15 = unaff_x23[0xd];
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar10 = *unaff_x27;
                  }
                  uVar7 = FUN_05132de0(lVar11,lVar15,
                                       *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                                       *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
                  if (!bVar17 && ((uVar7 ^ 0xffffffff) & 1) == 0) goto LAB_055bbd68;
                  lVar10 = *unaff_x20;
                  lVar11 = *unaff_x23;
                  bVar2 = *(byte *)(lVar11 + 0x130);
                  uVar9 = (ulong)*(byte *)(lVar10 + 0x130);
                }
                if (((uint)bVar2 < (uint)uVar9) ||
                   (*(long *)(*(long *)(lVar11 + 200) + uVar9 * 8 + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08d48(unaff_x23);
                }
                lVar11 = FUN_055bb6cc();
                if (lVar11 != 0) {
                  *(undefined1 *)(lVar11 + 0xb0) = 1;
                }
                if (*(char *)(unaff_x19 + 0xa0) != '\0') {
                  if (unaff_x21 != 0) {
                    lVar15 = *(long *)(unaff_x21 + 0x10);
                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    if (lVar15 != 0) {
                      uVar7 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
                        *(long *)(lVar15 + (long)(int)uVar7 * 8 + 0x20) = lVar11;
                      }
                      else {
                        FUN_03abf904();
                      }
                      goto LAB_055bbd68;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_055bbd68;
              }
              bVar1 = *(byte *)(*unaff_x29 + 0x130);
              if (((bVar2 < bVar1) || (*(long *)(lVar15 + (ulong)bVar1 * 8 + -8) != *unaff_x29)) ||
                 (lVar11 = (**(code **)(lVar11 + 0x238))(unaff_x23,*(undefined8 *)(lVar11 + 0x240)),
                 lVar11 == 0)) goto LAB_055bbd68;
              in_stack_00000060 = FUN_057715f4(lVar11,0);
              in_stack_00000020 = (long *)&stack0x00000058;
            }
            if (in_stack_00000060 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            unaff_x24 = (long *)FUN_05771994(in_stack_00000060,0);
          } while (unaff_x24 == (long *)0x0);
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          bVar2 = *(byte *)(*unaff_x28 + 0x130);
          if ((bVar1 < bVar2) ||
             (lVar11 = *(long *)(*unaff_x24 + 200),
             *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(unaff_x24);
          }
          bVar2 = *(byte *)(*unaff_x20 + 0x130);
        } while ((bVar1 < bVar2) || (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *unaff_x20));
        bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__ +
                         0x130);
        if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x23);
        }
        lVar10 = *unaff_x27;
        lVar11 = unaff_x23[0xc];
        lVar15 = unaff_x23[0xd];
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar10 = *unaff_x27;
        }
        uVar9 = FUN_05132f8c(lVar11,lVar15,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                             *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
        param_3 = *unaff_x20;
        param_1 = *unaff_x24;
        if ((uVar9 & 1) != 0) {
          if ((*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) ||
             (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) !=
              param_3)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(unaff_x24);
          }
          if ((long *)unaff_x24[0x17] != (long *)0x0) {
            lVar11 = *(long *)unaff_x24[0x17];
            bVar1 = *(byte *)(*(long *)
                               System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                             + 0x130);
            if ((bVar1 <= *(byte *)(lVar11 + 0x130)) &&
               (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)
                 System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
               )) {
              bVar1 = *(byte *)(*(long *)
                                 Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__ +
                               0x130);
              if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(unaff_x23);
              }
              FUN_05773438(unaff_x24,unaff_x23[0xc],unaff_x23[0xd],0);
              param_3 = *unaff_x20;
              param_1 = *unaff_x24;
            }
          }
        }
        in_w9 = (uint)*(byte *)(param_1 + 0x130);
        in_x10 = (ulong)*(byte *)(param_3 + 0x130);
        if ((*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) ||
           (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x24);
        }
        if (unaff_x24[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *(long *)(unaff_x24[0x14] + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if ((*(int *)(lVar11 + 0x10) == 0) || (*(char *)(unaff_x19 + 0xa0) != '\0'))
        goto code_r0x055bc0e4;
        lVar10 = *unaff_x27;
        lVar11 = unaff_x24[0xc];
        lVar15 = unaff_x24[0xd];
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar10 = *unaff_x27;
        }
        uVar9 = FUN_05132de0(lVar11,lVar15,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),
                             *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),0);
        param_3 = *unaff_x20;
        param_1 = *unaff_x24;
        in_w9 = (uint)*(byte *)(param_1 + 0x130);
        in_x10 = (ulong)*(byte *)(param_3 + 0x130);
        if ((uVar9 & 1) == 0) goto code_r0x055bc0e4;
        if ((*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) ||
           (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(unaff_x24);
        }
      } while ((long *)unaff_x24[0x17] == (long *)0x0);
      lVar11 = *(long *)unaff_x24[0x17];
      bVar1 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo
                       + 0x130);
    } while ((*(byte *)(lVar11 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)
              System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionNoT_Ref_TypeInfo));
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_055bc500:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_055bc534;
    }
  }
LAB_055bc518:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar3,0);
LAB_055bc534:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_055bc540:
  if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0(in_stack_00000028);
  }
  lVar11 = FUN_0576fe78();
  if (lVar11 != 0) {
    lVar11 = FUN_0576fe78();
    if (lVar11 == 0) goto LAB_055bc7f8;
    in_stack_00000068 = FUN_057715f4(lVar11,0);
    puVar6 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    puVar5 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    while( true ) {
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar9 = FUN_057718f4(in_stack_00000068,0);
      puVar4 = PTR_DAT_067c91b0;
      if ((uVar9 & 1) == 0) break;
      if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar12 = (long *)FUN_05771994(in_stack_00000068,0);
      if (plVar12 != (long *)0x0) {
        bVar1 = *(byte *)(*plVar12 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar11 = *(long *)(*plVar12 + 200),
           *(long *)(lVar11 + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar12);
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if (((bVar2 <= bVar1) && (*(long *)(lVar11 + (ulong)bVar2 * 8 + -8) == *(long *)puVar5)) &&
           (uVar9 = FUN_055b8f80(plVar12,plVar12,*(undefined8 *)puVar6,0), (uVar9 & 1) == 0)) {
          FUN_055c0e40();
        }
      }
    }
    plVar12 = (long *)thunk_FUN_02f45174(in_stack_00000068,*(undefined8 *)PTR_DAT_067c91b0);
    in_stack_00000058 = plVar12;
    if (plVar12 != (long *)0x0) {
      lVar11 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_055bc6c4;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar4,0);
LAB_055bc6c4:
      (*(code *)*puVar13)(plVar12,puVar13[1]);
    }
  }
  if ((*(char *)(unaff_x19 + 0xa0) == '\0') || ((in_stack_00000008 & 0x100000000) == 0)) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x28), plVar12 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    uVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                 UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateJointTransformLocalPoses_00000096_PostfixBurstDelegate_TypeInfo
                               );
    FUN_03abf17c(uVar14,uVar8,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    if (unaff_x21 != 0) {
      FUN_03ac039c(&stack0x00000040);
      puVar3 = 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_PostfixBurstDelegate_TypeInfo
      ;
      while (uVar9 = FUN_04aff1b0(&stack0x00000040,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        FUN_055c3e7c();
      }
      FUN_04aff1ac(&stack0x00000040,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00001219_BurstDirectCall_TypeInfo
                  );
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28), lVar11 != 0)) {
        FUN_0558e290(lVar11,uVar14,0);
        return;
      }
    }
  }
LAB_055bc7f8:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


