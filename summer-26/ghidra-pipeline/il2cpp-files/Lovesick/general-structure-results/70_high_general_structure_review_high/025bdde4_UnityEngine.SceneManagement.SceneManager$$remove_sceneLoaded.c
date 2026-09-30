/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$remove_sceneLoaded
ENTRY_POINT: 025bdde4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;telemetry_or_network_hits_8
*/


void UnityEngine_SceneManagement_SceneManager__remove_sceneLoaded(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444();
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
  *(undefined1 *)(unaff_x21 + 0xdb) = 1;
  puVar2 = 
  Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
  ;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(unaff_x23 + 0x18) == 0) {
    return;
  }
  plVar6 = (long *)thunk_FUN_00d6225c();
  if (plVar6 == (long *)0x0) {
    iVar5 = 0;
  }
  else {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_025bded0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0);
LAB_025bded0:
    iVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  puVar4 = StringLiteral_13003;
  puVar3 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  puVar2 = System_Func<KeyValuePair<int,_int>,_KeyValuePair<int,_int>>_TypeInfo;
  FUN_01323390();
  bVar1 = false;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000030 = in_stack_00000010;
  do {
    do {
      while( true ) {
        do {
          uVar11 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar4);
          if ((uVar11 & 1) == 0) {
            FUN_012b8948(&stack0x00000020,
                         *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Hand>__ctor__);
            return;
          }
          uVar8 = FUN_00cc5764(&stack0x00000020,*(undefined8 *)puVar2);
          lVar10 = thunk_FUN_00d6225c(uVar8,*(undefined8 *)puVar3);
        } while (lVar10 == 0);
        if (iVar5 != 0 && !(bool)(iVar5 == 1 & bVar1)) break;
        uVar11 = (**(code **)(*unaff_x20 + 0x238))();
        if ((uVar11 & 1) != 0) {
          FUN_025bbe40();
        }
      }
      uVar11 = FUN_025b7020();
    } while ((uVar11 & 1) == 0);
    if (!bVar1) {
      if (unaff_x20[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = FUN_0129eff4(unaff_x20[0x17],lVar10,&stack0x00000018,
                            *(undefined8 *)StringLiteral_1632);
      if ((uVar11 & 1) == 0) {
        lVar9 = *(long *)
                 Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_32>__
        ;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar9 = *(long *)
                   Method_UnityEngine_Mesh_MeshData_GetVertexData<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_32>__
          ;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar13 = FUN_0131d344(lVar9,*(undefined8 *)StringLiteral_14054);
        in_stack_00000018 = auVar13._0_8_;
        if (unaff_x20[0x17] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(0,auVar13._8_8_,in_stack_00000018);
        }
        FUN_01299e64(unaff_x20[0x17],lVar10,in_stack_00000018,
                     *(undefined8 *)Method_Messenger<int>_Broadcast__);
      }
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00cc63d0(in_stack_00000018,plVar6,
                   *(undefined8 *)
                    Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetConverter__
                  );
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)
             Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
           ) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_025be0b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnPartialTranscription__
                          ,1);
LAB_025be0b4:
    lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar9 != 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00cc65c0(lVar9,lVar10,*(undefined8 *)StringLiteral_6559);
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
          goto LAB_025be144;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724();
LAB_025be144:
    uVar11 = (*(code *)*puVar7)();
    bVar1 = true;
    if ((uVar11 & 1) != 0) {
      bVar1 = true;
      FUN_025bbe40();
    }
  } while( true );
}


