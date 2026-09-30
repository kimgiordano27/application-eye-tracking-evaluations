/*
FUNCTION_NAME: TMPro.TMP_Dropdown$$get_IsExpanded
ENTRY_POINT: 066dd388
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void TMPro_TMP_Dropdown__get_IsExpanded(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  byte unaff_w25;
  byte *unaff_x26;
  undefined4 unaff_w27;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  int iStack0000000000000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 in_stack_000001d0;
  
  FUN_02fe925c();
  FUN_02fe925c(OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo);
  FUN_02fe925c(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
  FUN_02fe925c(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
  FUN_02fe925c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0x132) = 1;
  in_stack_00000190 = 0;
  in_stack_00000158 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  _iStack0000000000000168 = 0;
  in_stack_00000160 = 0;
  in_stack_000001d0 = *(undefined4 *)(unaff_x22 + 0x108);
  in_stack_000001c8 = *(undefined8 *)(unaff_x22 + 0x100);
  in_stack_000001c0 = *(undefined8 *)(unaff_x22 + 0xf8);
  in_stack_000001b8 = *(undefined8 *)(unaff_x22 + 0xf0);
  in_stack_000001b0 = *(undefined8 *)(unaff_x22 + 0xe8);
  in_stack_000001a8 = *(undefined8 *)(unaff_x22 + 0xe0);
  in_stack_000001a0 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_068e41c8(&stack0x000001a0,0,0);
  in_stack_00000128 = in_stack_000001a8;
  in_stack_00000120 = in_stack_000001a0;
  in_stack_00000138 = in_stack_000001b8;
  in_stack_00000130 = in_stack_000001b0;
  in_stack_00000148 = in_stack_000001c8;
  in_stack_00000140 = in_stack_000001c0;
  in_stack_00000150 = in_stack_000001d0;
  if (*(long *)(unaff_x21 + 0x1e0) == 0) goto LAB_066dd83c;
  plVar1 = (long *)(unaff_x21 + 0x1e0);
  in_stack_000000e8 = in_stack_000001a8;
  in_stack_000000e0 = in_stack_000001a0;
  in_stack_000000f8 = in_stack_000001b8;
  in_stack_000000f0 = in_stack_000001b0;
  in_stack_00000108 = in_stack_000001c8;
  in_stack_00000100 = in_stack_000001c0;
  in_stack_00000110 = in_stack_000001d0;
  FUN_06794af0(*(long *)(unaff_x21 + 0x1e0),&stack0x000000e0,unaff_w27,0);
  if (*(int *)(unaff_x22 + 200) != 0) {
    if (*(long *)(unaff_x22 + 0x208) == 0) goto LAB_066dd83c;
    FUN_03bbf6cc(*(long *)(unaff_x22 + 0x208),&stack0x00000158,
                 *(undefined8 *)
                  OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    if ((in_stack_00000158 == 0) ||
       (plVar6 = (long *)FUN_0675da60(in_stack_00000158,0), plVar6 == (long *)0x0))
    goto LAB_066dd83c;
    bVar10 = *(byte *)(*(long *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar10) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar10 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar6);
    }
    lVar7 = *plVar1;
    if (lVar7 != plVar6[0x3c]) {
      if (lVar7 == 0) goto LAB_066dd83c;
      UnityEngine_AndroidJNI__CallObjectMethod(lVar7,0);
      *plVar1 = plVar6[0x3c];
      thunk_FUN_03048534(plVar1);
    }
    *(undefined2 *)(unaff_x21 + 0x1e9) = 0x101;
    *(long *)(unaff_x21 + 0x1f0) = plVar6[0x3e];
    thunk_FUN_03048534(unaff_x21 + 0x1f0);
    puVar11 = (undefined8 *)(unaff_x21 + 0x1f8);
    *(long *)(unaff_x21 + 0x1f8) = plVar6[0x3f];
    thunk_FUN_03048534(puVar11);
    *unaff_x20 = *(undefined8 *)(unaff_x21 + 0x1f0);
    thunk_FUN_03048534();
    goto LAB_066dd80c;
  }
  bVar10 = *unaff_x26;
  bVar2 = unaff_x26[1] | unaff_w25 & 1;
  *(byte *)(unaff_x21 + 0x1e9) = bVar2;
  bVar10 = bVar10 | bVar2;
  *(byte *)(unaff_x21 + 0x1ea) = bVar10;
  if (bVar2 != 0) {
    if (*plVar1 == 0) goto LAB_066dd83c;
    lVar7 = FUN_067946d0(*plVar1,0);
    if (lVar7 == 0) {
LAB_066dd5dc:
      if (*plVar1 == 0) goto LAB_066dd83c;
      uVar9 = FUN_06794718();
      *(undefined8 *)(unaff_x21 + 0x1f0) = uVar9;
      thunk_FUN_03048534((long *)(unaff_x21 + 0x1f0),uVar9);
      lVar7 = *(long *)(unaff_x21 + 0x1f0);
      if (lVar7 == 0) goto LAB_066dd83c;
      in_stack_00000140 = *(undefined8 *)(lVar7 + 0x48);
      in_stack_00000138 = *(undefined8 *)(lVar7 + 0x40);
      in_stack_00000130 = *(undefined8 *)(lVar7 + 0x38);
      in_stack_00000128 = *(undefined8 *)(lVar7 + 0x30);
      in_stack_00000120 = *(undefined8 *)(lVar7 + 0x28);
      if (unaff_x23 == 0) goto LAB_066dd83c;
      FUN_06916814();
      if (*(long *)(unaff_x21 + 0x1f0) == 0) goto LAB_066dd83c;
      FUN_06916814();
    }
    else {
      if ((*plVar1 == 0) || (lVar7 = FUN_067946d0(*plVar1,0), lVar7 == 0)) goto LAB_066dd83c;
      in_stack_00000140 = *(undefined8 *)(lVar7 + 0x48);
      in_stack_00000138 = *(undefined8 *)(lVar7 + 0x40);
      in_stack_00000130 = *(undefined8 *)(lVar7 + 0x38);
      in_stack_00000128 = *(undefined8 *)(lVar7 + 0x30);
      in_stack_00000120 = *(undefined8 *)(lVar7 + 0x28);
      FUN_06911464(&stack0x000000b8,2,0);
      in_stack_00000068 = in_stack_000000c0;
      in_stack_00000060 = in_stack_000000b8;
      in_stack_00000078 = in_stack_000000d0;
      in_stack_00000070 = in_stack_000000c8;
      in_stack_00000080 = in_stack_000000d8;
      in_stack_00000098 = in_stack_00000128;
      in_stack_00000090 = in_stack_00000120;
      in_stack_000000a8 = in_stack_00000138;
      in_stack_000000a0 = in_stack_00000130;
      in_stack_000000b0 = in_stack_00000140;
      uVar8 = FUN_069119bc(&stack0x00000090,&stack0x00000060,0);
      if ((uVar8 & 1) != 0) goto LAB_066dd5dc;
    }
    if (*plVar1 == 0) {
LAB_066dd83c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar9 = FUN_067946d0(*plVar1,0);
    *(undefined8 *)(unaff_x21 + 0x1f0) = uVar9;
    thunk_FUN_03048534(unaff_x21 + 0x1f0);
    bVar10 = *(byte *)(unaff_x21 + 0x1ea);
  }
  if (bVar10 != 0) {
    in_stack_00000190 = *(undefined4 *)(unaff_x22 + 0x108);
    in_stack_00000178 = *(undefined8 *)(unaff_x22 + 0xf0);
    in_stack_00000170 = *(undefined8 *)(unaff_x22 + 0xe8);
    in_stack_00000188 = *(undefined8 *)(unaff_x22 + 0x100);
    in_stack_00000180 = *(undefined8 *)(unaff_x22 + 0xf8);
    _iStack0000000000000168 = *(undefined8 *)(unaff_x22 + 0xe0);
    in_stack_00000160 = *(undefined8 *)(unaff_x22 + 0xd8);
    FUN_068e4280(&stack0x00000160,1,0);
    FUN_068e40b4(&stack0x00000160,0,0);
    FUN_068e41c8(&stack0x00000160,0x20,0);
    if ((*(char *)(unaff_x22 + 0x1c0) == '\0') && (*(char *)(unaff_x21 + 0x1e8) != '\0')) {
      if ((iStack0000000000000168 < 2) || (uVar8 = FUN_069009c0(0), (uVar8 & 1) != 0)) {
        bVar4 = false;
      }
      else {
        iVar5 = FUN_06900970(0);
        bVar4 = iVar5 != 0;
      }
      FUN_068e4844(&stack0x00000160,bVar4,0);
    }
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x21 + 0x1f8,&stack0x00000160,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0);
  }
  puVar3 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (*(char *)(unaff_x21 + 0x1e9) == '\0') {
    lVar7 = *(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *(long *)puVar3;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  }
  else {
    puVar11 = (undefined8 *)(unaff_x21 + 0x1f0);
  }
  *unaff_x20 = *puVar11;
  thunk_FUN_03048534();
  puVar3 = OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
  if (*(char *)(unaff_x21 + 0x1ea) == '\0') {
    lVar7 = *(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar7 = *(long *)puVar3;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  }
  else {
    puVar11 = (undefined8 *)(unaff_x21 + 0x1f8);
  }
LAB_066dd80c:
  *unaff_x19 = *puVar11;
  thunk_FUN_03048534();
  return;
}


