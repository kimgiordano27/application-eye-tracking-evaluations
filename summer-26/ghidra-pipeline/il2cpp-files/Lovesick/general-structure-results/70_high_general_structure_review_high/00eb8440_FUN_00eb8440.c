/*
FUNCTION_NAME: FUN_00eb8440
ENTRY_POINT: 00eb8440
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_00eb8440(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  plVar16 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377516c & 1) == 0) {
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB2_TexturePackerRegular_ProbeResult_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(PTR_DAT_033ea940);
    thunk_FUN_00d48444(PTR_DAT_033f5520);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<Collider>__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_UTess_Refinery_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8626);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextReader_<ParseNumberAsync>d__29>__
                      );
    thunk_FUN_00d48444(StringLiteral_6982);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Add__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(System_Xml_Schema_Position_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_get_Item__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Character>_Clear__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_0377516c = 1;
  }
  puVar4 = Method_UnityEngine_Component_GetComponentsInChildren<Collider>__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_get_Item__;
  puVar2 = System_Xml_Schema_Position_TypeInfo;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = (long *)0x0;
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0112fb9c(*(undefined8 *)puVar2);
  uVar9 = FUN_010dfe04(uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  lVar10 = FUN_0112fc70(1,*(undefined8 *)puVar3);
  puVar4 = StringLiteral_6982;
  puVar3 = Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__;
  puVar2 = Method_System_Collections_Generic_List<TMP_Character>_Clear__;
  if (lVar10 != 0) {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar1) {
      uVar17 = 0;
      do {
        if (uVar1 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar15 = *(long *)(lVar10 + (long)(int)uVar17 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_00eb8948;
        if (*(char *)(lVar15 + 0x150) != '\0') {
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_0268b4e0(lVar15,0,0);
          if ((uVar11 & 1) == 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            if (*(int *)(*plVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar12 = FUN_0112fd4c(uVar9,*(undefined8 *)puVar2);
            if (lVar12 == 0) goto LAB_00eb8948;
            FUN_010e58e8(lVar12,&local_a0,*(undefined8 *)puVar4);
            plVar13 = local_a0;
            if (local_a0 == (long *)0x0) goto LAB_00eb8948;
            (**(code **)(*local_a0 + 0x1a8))(local_a0,lVar15,*(undefined8 *)(*local_a0 + 0x1b0));
            FUN_00eb6084(plVar13);
            lVar15 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                               (lVar12,0);
            lVar12 = FUN_00eb8380(param_1);
            if ((lVar12 == 0) ||
               (uVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                  (lVar12,0), lVar15 == 0)) goto LAB_00eb8948;
            FUN_0269fea8(lVar15,uVar9,0);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_00eb8948;
            FUN_00ac8228(*(long *)(param_1 + 0x28),plVar13,*(undefined8 *)puVar3);
          }
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar1);
    }
    puVar8 = StringLiteral_8626;
    puVar7 = StringLiteral_302;
    puVar6 = 
    Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
    ;
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextReader_<ParseNumberAsync>d__29>__
    ;
    puVar4 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
    puVar3 = DigitalOpus_MB_Core_MB2_TexturePackerRegular_ProbeResult_TypeInfo;
    puVar2 = PTR_DAT_033f5520;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x28),&local_a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Add__);
      uStack_78 = uStack_98;
      local_80 = local_a0;
      local_70 = local_90;
      do {
        while( true ) {
          do {
            uVar11 = FUN_012b894c(&local_80,*(undefined8 *)puVar8);
            if ((uVar11 & 1) == 0) {
              FUN_012b8948(&local_80,
                           *(undefined8 *)UnityEngine_Rendering_Universal_UTess_Refinery_TypeInfo);
              return;
            }
            lVar10 = FUN_00ac8418(&local_80,*(undefined8 *)puVar5);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_010c2e94(lVar10,&local_a0,*(undefined8 *)puVar3);
            plVar13 = local_a0;
            if (*(int *)(*plVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_0268b5e4(plVar13,0);
          } while ((uVar11 & 1) == 0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = (**(code **)(*plVar13 + 0x358))(plVar13,*(undefined8 *)(*plVar13 + 0x360));
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_0268b4e0(uVar9,0,0);
          if ((uVar11 & 1) == 0) break;
          uVar9 = FUN_0268b6ac(plVar13,0);
          plVar13 = (long *)thunk_FUN_00d93c64(plVar13,0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar14 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
          uVar9 = FUN_0160073c(*(undefined8 *)puVar6,uVar9,*(undefined8 *)puVar4,uVar14,0);
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026610e4(uVar9,0);
        }
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = FUN_0129eff4(*(long *)(param_1 + 0x30),uVar9,&local_88,*(undefined8 *)puVar2);
        if ((uVar11 & 1) == 0) {
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0267d6d8(lVar10,uVar9,0);
          local_88 = lVar10;
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0129a054(*(long *)(param_1 + 0x30),uVar9,lVar10,*(undefined8 *)PTR_DAT_033ea940);
          plVar16 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        }
        if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0267f088(local_88,*(undefined8 *)
                               Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__,
                     *(undefined4 *)(param_1 + 0x18),0);
        (**(code **)(*plVar13 + 0x348))(plVar13,local_88,*(undefined8 *)(*plVar13 + 0x350));
      } while( true );
    }
  }
LAB_00eb8948:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


