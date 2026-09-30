/*
FUNCTION_NAME: System.Net.RequestStream$$Flush
ENTRY_POINT: 05b2168c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_namespace_without_eye_use_flow
*/


void System_Net_RequestStream__Flush(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *plVar11;
  long *unaff_x25;
  long unaff_x26;
  long *plVar12;
  long unaff_x27;
  
code_r0x05b2168c:
  lVar6 = FUN_05b0ff20(param_1,param_2);
  if ((lVar6 != 0) && (plVar7 = (long *)FUN_05b1b128(), plVar7 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar7 + 0x468))
                      (plVar7,*(undefined8 *)(unaff_x27 + 0x20),*(undefined8 *)(*plVar7 + 0x470));
    *(undefined8 *)(unaff_x26 + 0x30) = uVar8;
    LeanTween__value();
    *(long *)(unaff_x26 + 0x48) = unaff_x27;
    LeanTween__value((long *)(unaff_x26 + 0x48),unaff_x27);
    if (unaff_x25 != (long *)0x0) {
      (**(code **)(*unaff_x25 + 0x308))(unaff_x25,unaff_x26,*(undefined8 *)(*unaff_x25 + 0x310));
      plVar7 = (long *)
               Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ulong>__ctor__
      ;
      plVar12 = (long *)
                Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
      ;
      do {
        FUN_05b1f4f8();
        if (((*(byte *)(unaff_x21 + 0x18) >> 3 & 1) != 0) && (*(int *)(unaff_x21 + 0x1c) != -1)) {
          if (unaff_x24[2] == 0) break;
          FUN_05ae0ffc(unaff_x24,0);
          FUN_05b1f698();
          plVar12 = (long *)
                    Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
          ;
        }
LAB_05b21770:
        do {
          plVar11 = *(long **)(unaff_x22 + 0x68);
          unaff_w23 = unaff_w23 + 1;
          if (plVar11 == (long *)0x0) goto LAB_05b2177c;
          lVar6 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x20) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05b212ec;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x20,0);
LAB_05b212ec:
          iVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
          if (iVar3 <= unaff_w23) {
            return;
          }
          plVar11 = *(long **)(unaff_x22 + 0x68);
          if (plVar11 == (long *)0x0) goto LAB_05b2177c;
          lVar6 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *plVar7) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05b21354;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*plVar7,0);
LAB_05b21354:
          unaff_x24 = (long *)(*(code *)*puVar4)(plVar11,unaff_w23,puVar4[1]);
          if (unaff_x24 == (long *)0x0) goto LAB_05b2177c;
          if (*unaff_x24 != *plVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(unaff_x24);
          }
          plVar11 = *(long **)(unaff_x21 + 0x58);
          if (plVar11 == (long *)0x0) goto LAB_05b2177c;
          uVar9 = (**(code **)(*plVar11 + 0x2c8))
                            (plVar11,unaff_x24[2],*(undefined8 *)(*plVar11 + 0x2d0));
        } while (((uVar9 & 1) != 0) || (unaff_x24[8] == 0));
        if ((unaff_x24[2] == 0) ||
           ((plVar11 = *(long **)(unaff_x21 + 0xc0), plVar11 == (long *)0x0 ||
            (lVar6 = (**(code **)(*plVar11 + 0x1a8))
                               (plVar11,*(undefined8 *)(unaff_x24[2] + 0x18),
                                *(undefined8 *)(*plVar11 + 0x1b0)), lVar6 == 0)))) break;
        if (0 < *(int *)(lVar6 + 0x10)) {
          lVar5 = FUN_05b217ac();
          if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) goto LAB_05b214c4;
          lVar6 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,2);
          plVar7 = (long *)unaff_x24[2];
          if ((plVar7 == (long *)0x0) ||
             (uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170)),
             lVar6 == 0)) break;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined8 *)(lVar6 + 0x20) = uVar8;
            LeanTween__value();
            lVar5 = *(long *)(unaff_x21 + 0x48);
            if (lVar5 == 0) break;
            uVar8 = *(undefined8 *)(lVar5 + 0x30);
            uVar1 = *(undefined8 *)(lVar5 + 0x38);
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ProjectConfiguration>_get_Task__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar8 = FUN_05b1ff78(uVar8,uVar1);
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar6 + 0x28) = uVar8;
              LeanTween__value();
              FUN_05b1f128();
              plVar7 = (long *)
                       Method_System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<ulong>__ctor__
              ;
              plVar12 = (long *)
                        Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
              ;
              goto LAB_05b21770;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar5 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
LAB_05b214c4:
        if ((unaff_x19 & 1) != 0) goto code_r0x05b214d0;
        if (unaff_x25 == (long *)0x0) break;
        (**(code **)(*unaff_x25 + 0x308))
                  (unaff_x25,unaff_x24[0x10],*(undefined8 *)(*unaff_x25 + 0x310));
      } while( true );
    }
  }
LAB_05b2177c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
code_r0x05b214d0:
  unaff_x26 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_string>_TryGetValue__
                                );
  FUN_05a8d864(unaff_x26,0);
  if (((unaff_x24[2] == 0) || (plVar7 = *(long **)(unaff_x21 + 0xc0), plVar7 == (long *)0x0)) ||
     (uVar8 = (**(code **)(*plVar7 + 0x1a8))
                        (plVar7,*(undefined8 *)(unaff_x24[2] + 0x10),
                         *(undefined8 *)(*plVar7 + 0x1b0)), unaff_x26 == 0)) goto LAB_05b2177c;
  *(undefined8 *)(unaff_x26 + 0x10) = uVar8;
  LeanTween__value();
  *(long *)(unaff_x26 + 0x18) = lVar6;
  LeanTween__value((long *)(unaff_x26 + 0x18),lVar6);
  plVar7 = *(long **)(unaff_x21 + 0xc0);
  if (plVar7 == (long *)0x0) goto LAB_05b2177c;
  uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,lVar5,*(undefined8 *)(*plVar7 + 0x1b0));
  *(undefined8 *)(unaff_x26 + 0x20) = uVar8;
  LeanTween__value((undefined8 *)(unaff_x26 + 0x20),uVar8);
  uVar8 = *(undefined8 *)
           Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_string>__ctor__;
  *(undefined4 *)(unaff_x26 + 0x50) = 2;
  unaff_x27 = thunk_FUN_02dd3144(uVar8);
  FUN_05b8fb00(unaff_x27,0);
  if ((unaff_x27 == 0) || (plVar7 = (long *)unaff_x24[6], plVar7 == (long *)0x0)) goto LAB_05b2177c;
  param_1 = *(long *)(unaff_x27 + 0x28);
  unaff_x19 = unaff_x19 & 0xffffffff;
  iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
  plVar7 = (long *)unaff_x24[8];
  if (iVar3 == 2) {
    if (plVar7 == (long *)0x0) goto LAB_05b2177c;
    bVar2 = *(byte *)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<TryTask>d__9>__
                     + 0x130);
    if (((*(byte *)(*plVar7 + 0x130) < bVar2) ||
        (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
         *(long *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<TryTask>d__9>__
        )) || (param_1 == 0)) goto LAB_05b2177c;
    *(long *)(param_1 + 0x30) = plVar7[2];
    LeanTween__value();
    if (plVar7[2] == 0) goto LAB_05b2177c;
    *(long *)(unaff_x27 + 0x20) = plVar7[3];
    LeanTween__value();
  }
  else {
    *(undefined8 *)(unaff_x27 + 0x20) = plVar7;
    LeanTween__value((undefined8 *)(unaff_x27 + 0x20),plVar7);
    if (param_1 == 0) goto LAB_05b2177c;
  }
  lVar6 = unaff_x24[5];
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_05b0fe48(param_1,lVar6,0);
  FUN_05b0fed8(param_1,unaff_x24[0x10],0);
  param_2 = 0;
  goto code_r0x05b2168c;
}


