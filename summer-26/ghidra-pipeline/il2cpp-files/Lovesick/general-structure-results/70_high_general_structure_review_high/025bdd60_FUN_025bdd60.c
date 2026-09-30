/*
FUNCTION_NAME: FUN_025bdd60
ENTRY_POINT: 025bdd60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;telemetry_or_network_hits_10
*/


void FUN_025bdd60(long *param_1,long *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_037830db & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1632);
    thunk_FUN_00d48444(Method_Messenger<int>_Broadcast__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Hand>__ctor__);
    thunk_FUN_00d48444(StringLiteral_13003);
    thunk_FUN_00d48444(System_Func<KeyValuePair<int,_int>,_KeyValuePair<int,_int>>_TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_ControllerSelector_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
                      );
    thunk_FUN_00d48444(StringLiteral_14054);
    thunk_FUN_00d48444(StringLiteral_6559);
    thunk_FUN_00d48444(
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter__
                      );
    thunk_FUN_00d48444(StringLiteral_15);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtnq_u32_f32__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_32>__
                      );
    DAT_037830db = 1;
  }
  puVar4 = StringLiteral_15;
  puVar2 = 
  Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
  ;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    return;
  }
  plVar7 = (long *)thunk_FUN_00d6225c(param_2,*(undefined8 *)
                                               Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
                                     );
  if (plVar7 == (long *)0x0) {
    iVar6 = 0;
  }
  else {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_025bded0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_025bded0:
    iVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  puVar5 = StringLiteral_13003;
  puVar3 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  puVar2 = System_Func<KeyValuePair<int,_int>,_KeyValuePair<int,_int>>_TypeInfo;
  FUN_01323390(param_3,&local_a0,*(undefined8 *)puVar4);
  bVar1 = false;
  uStack_78 = uStack_98;
  local_80 = local_a0;
  local_70 = local_90;
  do {
    do {
      while( true ) {
        do {
          uVar12 = FUN_012b894c(&local_80,*(undefined8 *)puVar5);
          if ((uVar12 & 1) == 0) {
            FUN_012b8948(&local_80,*(undefined8 *)Method_UnityEngine_Events_UnityEvent<Hand>__ctor__
                        );
            return;
          }
          uVar9 = FUN_00cc5764(&local_80,*(undefined8 *)puVar2);
          lVar11 = thunk_FUN_00d6225c(uVar9,*(undefined8 *)puVar3);
        } while (lVar11 == 0);
        if (iVar6 != 0 && !(bool)(iVar6 == 1 & bVar1)) break;
        uVar12 = (**(code **)(*param_1 + 0x238))
                           (param_1,param_2,lVar11,*(undefined8 *)(*param_1 + 0x240));
        if ((uVar12 & 1) != 0) {
          FUN_025bbe40(param_1,param_2,lVar11);
        }
      }
      uVar12 = FUN_025b7020(param_1,param_2,lVar11);
    } while ((uVar12 & 1) == 0);
    if (!bVar1) {
      if (param_1[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = FUN_0129eff4(param_1[0x17],lVar11,&local_88,*(undefined8 *)StringLiteral_1632);
      if ((uVar12 & 1) == 0) {
        lVar10 = *(long *)
                  Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_32>__
        ;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)
                    Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_32>__
          ;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar14 = FUN_0131d344(lVar10,*(undefined8 *)StringLiteral_14054);
        local_88 = auVar14._0_8_;
        if (param_1[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(0,auVar14._8_8_,local_88);
        }
        FUN_01299e64(param_1[0x17],lVar11,local_88,*(undefined8 *)Method_Messenger<int>_Broadcast__)
        ;
      }
      if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00cc63d0(local_88,plVar7,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter__
                  );
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)
             Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
           ) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_025be0b4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar7,*(long *)
                                  Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
                          ,1);
LAB_025be0b4:
    lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (lVar10 != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00cc65c0(lVar10,lVar11,*(undefined8 *)StringLiteral_6559);
    }
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 5) * 0x10 + 0x138);
          goto LAB_025be144;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(param_2,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__,5);
LAB_025be144:
    uVar12 = (*(code *)*puVar8)(param_2,puVar8[1]);
    bVar1 = true;
    if ((uVar12 & 1) != 0) {
      bVar1 = true;
      FUN_025bbe40(param_1,param_2,lVar11);
    }
  } while( true );
}


