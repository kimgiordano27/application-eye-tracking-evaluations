/*
FUNCTION_NAME: FUN_012cbf74
ENTRY_POINT: 012cbf74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_012cbf74(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 local_44 [4];
  
  puVar1 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
  if ((DAT_037765dd & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_Stream_NullStream_EndWrite__);
    thunk_FUN_00d48444(
                      Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_initialValueCaptured__
                      );
    thunk_FUN_00d48444(StringLiteral_702);
    thunk_FUN_00d48444(Method_UnityEngine_MonoBehaviour_StopCoroutine__);
    thunk_FUN_00d48444(StringLiteral_498);
    DAT_037765dd = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    FUN_017b46ec(lVar4,0);
    lVar5 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(lVar5 + 0x80) + 0x60;
    FUN_00da4f60(lVar5,8);
    plVar6 = (long *)thunk_FUN_00d32ed4(param_1,lVar5);
    *plVar6 = lVar4;
    FUN_0169c82c(param_1,0);
    puVar1 = StringLiteral_702;
    if (param_2 == 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar12 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar10 = thunk_FUN_00d48444(PTR_DAT_033eb700);
      FUN_016ec5b8(uVar12,uVar10,0);
      uVar10 = thunk_FUN_00d48444(StringLiteral_8736);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,uVar10);
    }
    if (param_1 != 0) {
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar2 = 
      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_initialValueCaptured__
      ;
      uVar12 = *(undefined8 *)(lVar4 + 0x80);
      FUN_00da4f60(uVar12,8);
      plVar6 = (long *)thunk_FUN_00d32ed4(param_1,uVar12);
      *plVar6 = param_2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_016d113c(param_2,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar12 = FUN_016c39d8(uVar12,0);
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c(lVar4);
      }
      lVar4 = *(long *)(lVar4 + 0x80) + 0x20;
      FUN_00da4f60(lVar4,8);
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar4);
      *puVar7 = uVar12;
      puVar1 = System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo;
      if (param_3 == 0) {
        if (*(int *)(*(long *)
                      System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03776617 == '\0') {
          thunk_FUN_00d48444(
                            System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo
                            );
          DAT_03776617 = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar4 = *(long *)puVar1;
        }
        param_3 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      }
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      lVar4 = *(long *)(lVar4 + 0x80) + 0x40;
      FUN_00da4f60(lVar4,8);
      plVar6 = (long *)thunk_FUN_00d32ed4(param_1,lVar4);
      *plVar6 = param_3;
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar4 + 0x80) + 0x20);
      puStack_58 = local_44;
      puVar11 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
      local_60 = *puVar7;
      local_44[0] = 0;
      (*(code *)puVar11[2])(*puVar11,puVar11,param_1,&local_60,&local_50);
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
      lVar4 = *(long *)(lVar4 + 0x80) + 0xa0;
      FUN_00da4f60(lVar4,8);
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar4);
      *puVar7 = local_50;
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar4 + 0x80) + 0xa0);
      uVar8 = FUN_017b4f64(*puVar7,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
      if ((uVar8 & 1) != 0) {
        lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        lVar4 = *(long *)(lVar4 + 0x80) + 0xc0;
        FUN_00da4f60(lVar4,1);
        puVar9 = (undefined1 *)thunk_FUN_00d32ed4(param_1,lVar4);
        *puVar9 = 1;
      }
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      puVar1 = Method_System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_get_Item__;
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar4 + 0x80) + 0x20);
      uVar12 = *puVar7;
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      lVar4 = *(long *)(lVar4 + 0x80) + 0x80;
      FUN_00da4f60(lVar4,8);
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar4);
      *puVar7 = uVar12;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = *(long *)Method_System_IO_Stream_NullStream_EndWrite__;
      lVar4 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      plVar6 = (long *)**(long **)(lVar4 + 0xb8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = (**(code **)(*plVar6 + 0x178))(plVar6,0x1000,*(undefined8 *)(*plVar6 + 0x180));
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      lVar4 = *(long *)(lVar4 + 0x80) + 0x140;
      FUN_00da4f60(lVar4,8);
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar4);
      puVar1 = StringLiteral_498;
      *puVar7 = uVar12;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar3 = SystemNative_GetReadDirRBufferSize(0);
      if (iVar3 < 1) {
        uVar12 = 0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_033f3600 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar5 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar4 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar4 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        plVar6 = (long *)**(long **)(lVar4 + 0xb8);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = (**(code **)(*plVar6 + 0x178))(plVar6,iVar3,*(undefined8 *)(*plVar6 + 0x180));
      }
      lVar4 = **(long **)(*(long *)(param_4 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_00d5941c();
      }
      lVar4 = *(long *)(lVar4 + 0x80) + 0x160;
      FUN_00da4f60(lVar4,8);
      puVar7 = (undefined8 *)thunk_FUN_00d32ed4(param_1,lVar4);
      *puVar7 = uVar12;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


