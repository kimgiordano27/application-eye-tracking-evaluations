/*
FUNCTION_NAME: FUN_014df1c0
ENTRY_POINT: 014df1c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x014df654) */
/* WARNING: Removing unreachable block (ram,0x014df72c) */

undefined8 FUN_014df1c0(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined1 local_80 [24];
  undefined8 local_68;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_MoveNext__;
  local_68 = param_3;
  if ((DAT_03776f64 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_Voice_Logging_RingDictionaryBuffer<CorrelationID,_LogEntry>_ExtractAll__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(PTR_DAT_033f58e0);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_4148);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<WitResponseNode>_RemoveListener__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_8893);
    thunk_FUN_00d48444(PTR_DAT_033f4c18);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclez_s16__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<LinkObjectUI>__);
    thunk_FUN_00d48444(PTR_DAT_033f2268);
    thunk_FUN_00d48444(Method_UnityEngine_Animations_AnimationScriptPlayable__ctor__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_UnitySerializationUtility_SerializeUnityObject__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_MoveNext__
                      );
    DAT_03776f64 = 1;
  }
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    FUN_017b46ec(lVar6,0);
    *(undefined4 *)(lVar6 + 0x1c) = param_2;
    if (param_1 == (long *)0x0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar11 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar12 = thunk_FUN_00d48444(
                                 Method_UnityEngine_Playables_Playable_IsPlayableOfType<AudioClipPlayable>__
                                 );
      FUN_016ec5b8(uVar11,uVar12,0);
      uVar12 = thunk_FUN_00d48444(PTR_DAT_033ee468);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,uVar12);
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_GameObject_AddComponent<LinkObjectUI>__);
    puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
    if (lVar7 != 0) {
      FUN_013ba410(lVar7,*(undefined8 *)PTR_DAT_033f4c18);
      *(long *)(lVar6 + 0x10) = lVar7;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = Method_Oculus_Platform_Message<AssetDetailsList>_get_Data__;
      puVar1 = PTR_DAT_033f58e0;
      if (lVar7 != 0) {
        FUN_016f27fc(lVar7,lVar6,
                     *(undefined8 *)Method_UnityEngine_Animations_AnimationScriptPlayable__ctor__,0)
        ;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar1 = StringLiteral_4148;
        FUN_017d62d4(local_80,&local_68,lVar7,0);
        lVar7 = *param_1;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_014df3c8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar2,0);
LAB_014df3c8:
        uVar5 = (*(code *)*puVar8)(param_1,puVar8[1]);
        *(undefined4 *)(lVar6 + 0x18) = uVar5;
        *(uint *)(lVar6 + 0x1c) =
             *(uint *)(lVar6 + 0x1c) & ((int)*(uint *)(lVar6 + 0x1c) >> 0x1f ^ 0xffffffffU);
        lVar7 = *param_1;
        uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_014df42c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar1,0);
LAB_014df42c:
        plVar9 = (long *)(*(code *)*puVar8)(param_1,puVar8[1]);
        puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar3 = Method_Sirenix_Serialization_UnitySerializationUtility_SerializeUnityObject__;
        puVar2 = Method_UnityEngine_Events_UnityEvent<WitResponseNode>_RemoveListener__;
        puVar1 = PTR_DAT_033f2268;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar7 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_014df4b4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar4,0);
LAB_014df4b4:
          uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
          if ((uVar13 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_014df648;
            lVar7 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar13 == 0) goto LAB_014df620;
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_014df608;
          }
          lVar7 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_014df510;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,0);
LAB_014df510:
          lVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = FUN_017e7b04(lVar7,0);
          if ((uVar13 & 1) == 0) {
            lVar15 = *(long *)(lVar6 + 0x20);
            if (lVar15 == 0) {
              lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_Meta_Voice_Logging_RingDictionaryBuffer<CorrelationID,_LogEntry>_ExtractAll__
                                         );
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_011c181c(lVar15,lVar6,*(undefined8 *)puVar3,0);
              *(long *)(lVar6 + 0x20) = lVar15;
            }
            uVar11 = local_68;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03776311 == '\0') {
              thunk_FUN_00d48444(puVar1);
              DAT_03776311 = '\x01';
            }
            lVar10 = *(long *)puVar1;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *(long *)puVar1;
            }
            FUN_017ef320(lVar7,lVar15,uVar11,0x80000,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),0
                        );
          }
          else {
            *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
          }
        } while( true );
      }
    }
  }
  goto LAB_014df6d8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_014df608:
    if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_10310) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_014df63c;
    }
  }
LAB_014df620:
  puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)StringLiteral_10310,0);
LAB_014df63c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_014df648:
  if ((*(long *)(lVar6 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar7 != 0)) {
    uVar13 = FUN_017e7b04(lVar7,0);
    if (((uVar13 & 1) == 0) && (*(int *)(lVar6 + 0x18) < *(int *)(lVar6 + 0x1c))) {
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_014df6d8;
      local_80[0] = 1;
      FUN_013ba838(*(long *)(lVar6 + 0x10),local_80,*(undefined8 *)StringLiteral_8893);
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      return *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10);
    }
  }
LAB_014df6d8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


