/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 0177c8dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
          (ushort *param_1,ulong param_2,uint param_3,long param_4,uint *param_5,undefined1 *param_6
          )

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  uint uStack0000000000000014;
  ushort *in_stack_00000020;
  long in_stack_00000028;
  ushort *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((DAT_03778db7 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_IComparer_var);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13536);
    thunk_FUN_00d48444(StringLiteral_6003);
    DAT_03778db7 = 1;
  }
  puVar3 = Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__;
  uVar13 = (uint)param_2;
  if (uVar13 == 0) goto LAB_0177cec4;
  uVar1 = *param_1;
  if ((param_3 & 1) == 0) {
LAB_0177c96c:
    uVar14 = 0;
  }
  else {
    if (*(int *)(*(long *)Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0177c96c;
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 1;
      if (uVar13 <= uVar14) goto LAB_0177cec4;
      uVar1 = param_1[(int)uVar14];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
    } while ((uVar1 == 0x20) || (uVar1 - 9 < 5));
  }
  uVar20 = (uint)uVar1;
  uVar10 = param_2 >> 0x20;
  if ((param_3 >> 2 & 1) == 0) goto LAB_0177cc14;
  if (param_4 == 0) goto LAB_0177cef8;
  lVar18 = *(long *)(param_4 + 0x28);
  lVar16 = *(long *)(param_4 + 0x30);
  uVar5 = thunk_FUN_015fe514(lVar18,*(undefined8 *)StringLiteral_13536,0);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = thunk_FUN_015fe514(lVar16,*(undefined8 *)StringLiteral_6003,0), (uVar5 & 1) == 0)) {
    lVar11 = *(long *)
              Method_Oculus_Interaction_InteractableRegistry_InteractableSet_Enumerator<GrabInteractor,_GrabInteractable>_MoveNext__
    ;
    if (uVar13 < uVar14) {
      FUN_01792d54(0);
    }
    lVar9 = *(long *)(lVar11 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lVar6 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_00d5941c(lVar9);
      uVar1 = *(ushort *)(*(long *)(lVar11 + 0x20) + 0x132);
      lVar6 = *(long *)(lVar11 + 0x20);
    }
    uVar7 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_00d5941c(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
    in_stack_00000028 = (long)&stack0x00000038 + 4;
    in_stack_00000020 = param_1;
    in_stack_00000038._4_4_ = uVar14;
    (**(code **)(lVar6 + 0x10))(uVar7,lVar6,0,&stack0x00000020,&stack0x00000030);
    param_1 = in_stack_00000030;
    uVar13 = uVar13 - uVar14;
    param_2 = (ulong)uVar13;
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    puVar2 = System_Collections_IComparer_var;
    uVar10 = FUN_015ff8a0(lVar18,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_03776618 = '\x01';
      }
      if (lVar18 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = FUN_015fd038(lVar18,0);
        uVar8 = *(undefined4 *)(lVar18 + 0x10);
      }
      uVar10 = FUN_00be4a10(param_1,param_2,uVar7,uVar8,*(undefined8 *)puVar2);
      if ((uVar10 & 1) != 0) {
        if (lVar18 == 0) goto LAB_0177cef8;
        uVar14 = *(uint *)(lVar18 + 0x10);
        if (uVar14 < uVar13) {
          uVar20 = (uint)param_1[(int)uVar14];
          uVar10 = 0;
          goto LAB_0177cc14;
        }
        goto LAB_0177cec4;
      }
    }
    uVar10 = FUN_015ff8a0(lVar16,0);
    if ((uVar10 & 1) == 0) {
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        DAT_03776618 = '\x01';
      }
      if (lVar16 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = FUN_015fd038(lVar16,0);
        uVar8 = *(undefined4 *)(lVar16 + 0x10);
      }
      uVar10 = FUN_00be4a10(param_1,param_2,uVar7,uVar8,*(undefined8 *)puVar2);
      if ((uVar10 & 1) != 0) {
        if (lVar16 == 0) {
LAB_0177cef8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar14 = *(uint *)(lVar16 + 0x10);
        if (uVar14 < uVar13) {
          uVar1 = param_1[(int)uVar14];
          uVar10 = 0;
          goto LAB_0177cebc;
        }
        goto LAB_0177cec4;
      }
    }
    uVar10 = 0;
    uVar14 = 0;
LAB_0177cc14:
    uVar13 = (uint)param_2;
    uVar15 = 1;
LAB_0177cc18:
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = uVar20 - 0x30;
    if (uVar17 < 10) {
      uStack0000000000000014 = uVar15;
      if (uVar20 != 0x30) {
LAB_0177cc70:
        uVar20 = uVar14 + 1;
        iVar19 = -8;
        do {
          if (uVar13 <= uVar20) goto LAB_0177cd90;
          uVar1 = param_1[(int)(uVar14 + iVar19 + 9)];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (9 < uVar1 - 0x30) {
            uVar20 = uVar14 + iVar19 + 9;
            goto LAB_0177cdc0;
          }
          uVar20 = uVar14 + iVar19 + 10;
          bVar4 = iVar19 != -1;
          iVar19 = iVar19 + 1;
          uVar17 = ((uint)uVar1 + uVar17 * 10) - 0x30;
        } while (bVar4);
        if (uVar20 < uVar13) {
          uVar1 = param_1[(int)(uVar14 + 9)];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = uVar1 - 0x30;
          uVar20 = uVar14 + 9;
          if (9 < uVar15) {
LAB_0177cdc0:
            uVar14 = uVar20;
            bVar4 = false;
            uVar20 = (uint)uVar1;
            goto LAB_0177cdd4;
          }
          uVar14 = uVar14 + 10;
          if ((0x19999999 < uVar17) || ((bVar4 = false, uVar17 == 0x19999999 && (0x35 < uVar1)))) {
            bVar4 = true;
          }
          uVar17 = uVar15 + uVar17 * 10;
          if (uVar13 <= uVar14) goto LAB_0177ce94;
          do {
            uVar1 = param_1[(int)uVar14];
            uVar20 = (uint)uVar1;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (9 < uVar1 - 0x30) goto LAB_0177cdd4;
            uVar14 = uVar14 + 1;
            bVar4 = true;
          } while (uVar13 != uVar14);
        }
        else {
LAB_0177cd90:
          if ((uStack0000000000000014 & 1) != 0 || uVar17 == 0) {
LAB_0177cdac:
            uVar7 = 1;
            goto LAB_0177cecc;
          }
        }
LAB_0177ce98:
        uVar17 = 0;
        uVar7 = 0;
        *param_6 = 1;
        goto LAB_0177cecc;
      }
      do {
        uVar14 = uVar14 + 1;
        if (uVar13 <= uVar14) {
          uVar17 = 0;
          goto LAB_0177cdac;
        }
        uVar20 = (uint)param_1[(int)uVar14];
        uVar17 = param_1[(int)uVar14] - 0x30;
      } while (uVar17 == 0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (uVar17 < 10) goto LAB_0177cc70;
      uVar17 = 0;
      bVar4 = false;
LAB_0177cdd4:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if ((uVar20 - 9 < 5) || (uVar20 == 0x20)) {
        if ((param_3 >> 1 & 1) != 0) {
          uVar14 = uVar14 + 1;
          if ((int)uVar14 < (int)uVar13) {
            puVar12 = param_1 + (int)uVar14;
            do {
              if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar1 = *puVar12;
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_0177ce50;
              uVar14 = uVar14 + 1;
              puVar12 = puVar12 + 1;
            } while (uVar13 != uVar14);
          }
          else {
LAB_0177ce50:
            if (uVar14 < uVar13) goto LAB_0177ce64;
          }
          goto LAB_0177ce94;
        }
      }
      else {
LAB_0177ce64:
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_0177dfe4(param_1,(ulong)uVar13 | uVar10 << 0x20,uVar14);
        if ((uVar10 & 1) != 0) {
LAB_0177ce94:
          if (!bVar4) goto LAB_0177cd90;
          goto LAB_0177ce98;
        }
      }
    }
  }
  else {
    if (uVar1 != 0x2d) {
      if (uVar1 == 0x2b) {
        uVar14 = uVar14 + 1;
        if (uVar13 <= uVar14) goto LAB_0177cec4;
        uVar20 = (uint)param_1[(int)uVar14];
      }
      goto LAB_0177cc14;
    }
    uVar14 = uVar14 + 1;
    if (uVar14 < uVar13) {
      uVar1 = param_1[(int)uVar14];
LAB_0177cebc:
      uVar13 = (uint)param_2;
      uVar20 = (uint)uVar1;
      uVar15 = 0;
      goto LAB_0177cc18;
    }
  }
LAB_0177cec4:
  uVar17 = 0;
  uVar7 = 0;
LAB_0177cecc:
  *param_5 = uVar17;
  return uVar7;
}


