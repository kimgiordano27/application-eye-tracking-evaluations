/*
FUNCTION_NAME: FUN_01654d44
ENTRY_POINT: 01654d44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01654d44(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  puVar1 = OVRPlugin_OVRP_1_49_0_TypeInfo;
  if ((DAT_037782e8 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_49_0_TypeInfo);
    thunk_FUN_00d48444(System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunk_TypeInfo);
    thunk_FUN_00d48444(System_Func<STMVoiceData,_string>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_14350);
    thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray_ReadOnly<byte>_get_Length__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    DAT_037782e8 = 1;
  }
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar6 == 0) ||
     (FUN_0165633c(), puVar5 = StringLiteral_14350,
     puVar4 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__,
     puVar3 = Method_Unity_Collections_NativeArray_ReadOnly<byte>_get_Length__,
     puVar2 = System_Xml_XmlWellFormedWriter_AttributeValueCache_BufferChunk_TypeInfo,
     puVar1 = System_Func<JsonProperty,_int>_TypeInfo, param_2 == (long *)0x0)) {
LAB_01655098:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar15 = 0;
  do {
    lVar9 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_01654e70;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,4);
LAB_01654e70:
    lVar9 = (*(code *)*puVar7)(param_2,puVar7[1]);
    if (lVar9 == 0) goto LAB_01655098;
    if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar15) {
      if ((param_3 & 1) == 0) {
        plVar8 = *(long **)(param_1 + 0x18);
        if (plVar8 == (long *)0x0) goto LAB_01655098;
        (**(code **)(*plVar8 + 0x308))(plVar8,lVar6,*(undefined8 *)(*plVar8 + 0x310));
      }
      else {
        if ((*(long *)(lVar6 + 0x20) == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                            );
          uVar13 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          uVar14 = thunk_FUN_00d48444(Method_StartMenu_QuitConfirmed__);
          FUN_0164c318(uVar13,uVar14);
          uVar14 = thunk_FUN_00d48444(PTR_DAT_033f39d8);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar13,uVar14);
        }
        if (*(int *)(*(long *)System_Func<STMVoiceData,_string>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0164fc3c(lVar6);
      }
      *(long *)(param_1 + 0x20) = lVar6;
      return;
    }
    lVar9 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_01654edc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,4);
LAB_01654edc:
    lVar9 = (*(code *)*puVar7)(param_2,puVar7[1]);
    if (lVar9 == 0) goto LAB_01655098;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) {
LAB_0165509c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar10 = *param_2;
    uVar13 = *(undefined8 *)(lVar9 + uVar15 * 8 + 0x20);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_01654f50;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar2,5);
LAB_01654f50:
    lVar9 = (*(code *)*puVar7)(param_2,puVar7[1]);
    if (lVar9 == 0) goto LAB_01655098;
    if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_0165509c;
    uVar14 = *(undefined8 *)(lVar9 + uVar15 * 8 + 0x20);
    uVar11 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar5,0);
    if (((uVar11 & 1) == 0) || ((param_3 & 1) != 0)) {
      uVar11 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar3,0);
      if ((uVar11 & 1) == 0) {
        uVar11 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar1,0);
        if (((uVar11 & 1) == 0) || ((param_3 & 1) == 0)) {
          uVar11 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar4,0);
          if ((uVar11 & 1) == 0) {
            plVar8 = (long *)FUN_016563f0(lVar6);
            if (plVar8 == (long *)0x0) goto LAB_01655098;
            (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar13,uVar14,*(undefined8 *)(*plVar8 + 0x2b0));
          }
          else {
            *(undefined8 *)(lVar6 + 0x18) = uVar14;
          }
        }
        else {
          *(undefined8 *)(lVar6 + 0x20) = uVar14;
        }
      }
      else {
        *(undefined8 *)(lVar6 + 0x28) = uVar14;
      }
    }
    else {
      *(undefined8 *)(lVar6 + 0x10) = uVar14;
    }
    uVar15 = uVar15 + 1;
  } while( true );
}


