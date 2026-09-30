/*
FUNCTION_NAME: System.Text.RegularExpressions.RegexCharClass$$AddCategoryFromName
ENTRY_POINT: 03916100
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03916680) */

void System_Text_RegularExpressions_RegexCharClass__AddCategoryFromName(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x24;
  
  if ((param_1 & 1) != 0) {
    uVar8 = (**(code **)(*unaff_x19 + 0x888))();
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                        );
    }
    FUN_03915f60(uVar8);
  }
  uVar8 = (**(code **)(*unaff_x19 + 0x728))();
  lVar12 = *unaff_x24;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar12);
    lVar12 = *unaff_x24;
  }
  puVar1 = StringLiteral_3488;
  lVar15 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  if (lVar15 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
      lVar12 = *unaff_x24;
    }
    uVar16 = **(undefined8 **)(lVar12 + 0xb8);
    lVar15 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
    FUN_02e6c0a0(lVar15,uVar16,*(undefined8 *)StringLiteral_3490,0);
    plVar9 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
    *plVar9 = lVar15;
    thunk_FUN_01f51358(plVar9,lVar15);
  }
  plVar9 = (long *)FUN_0230b6f4(uVar8,lVar15,*(undefined8 *)puVar1);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *plVar9;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03916258;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,0
                        );
LAB_03916258:
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar5 = StringLiteral_3492;
  puVar4 = Method_System_Linq_Enumerable_OrderBy<Type,_string>__;
  puVar3 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_039162e0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_039162e0:
    uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto System_Text_RegularExpressions_RegexCharClass__AddLowercase;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
    FUN_035ac8e8(lVar12,0);
    lVar15 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03916350;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03916350:
    uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar10 = (undefined8 *)(lVar12 + 0x10);
    *puVar10 = uVar8;
    thunk_FUN_01f51358(puVar10);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_039163cc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238();
LAB_039163cc:
    uVar13 = (*(code *)*puVar11)();
    if ((uVar13 & 1) != 0) {
      uVar8 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
      FUN_02e6c0a0(uVar8,lVar12,*(undefined8 *)StringLiteral_3491,0);
      uVar6 = FUN_022e458c();
      uVar8 = *puVar10;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03916ce8(uVar8);
      uVar8 = *puVar10;
      if ((uVar6 & uVar7 & 1) == 0) {
        if ((uVar6 & 1) == 0) {
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = *(uint *)(unaff_x21 + 0x18);
          if (uVar6 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
            puVar10 = (undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
            *puVar10 = uVar8;
            thunk_FUN_01f51358(puVar10,uVar8);
          }
          else {
            FUN_030f2bb4();
          }
        }
        else {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_03916e8c(uVar8,0,0);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar6 = *(uint *)(unaff_x21 + 0x18);
          if (uVar6 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar8;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4();
          }
        }
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_03916e8c(uVar8,0,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = *(uint *)(unaff_x21 + 0x18);
        if (uVar6 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar8;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0391662c;
    }
  }
System_Text_RegularExpressions_RegexCharClass__AddLowercase:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0391662c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


