/*
FUNCTION_NAME: System.Linq.Expressions.CachedReflectionInfo$$get_CallSiteOps_Bind
ENTRY_POINT: 02e2a17c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Linq_Expressions_CachedReflectionInfo__get_CallSiteOps_Bind
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar5;
  undefined8 uVar6;
  long unaff_x29;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined4 uStack0000000000000104;
  undefined4 uStack0000000000000114;
  undefined4 uStack0000000000000124;
  undefined4 uStack000000000000012c;
  undefined4 uStack000000000000013c;
  undefined4 uStack000000000000014c;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000164;
  byte bStack0000000000000173;
  undefined4 uStack0000000000000174;
  byte bStack0000000000000183;
  undefined4 uStack0000000000000184;
  byte bStack0000000000000193;
  undefined4 uStack0000000000000194;
  byte bStack00000000000001a7;
  byte bStack00000000000001c7;
  byte bStack00000000000001d3;
  undefined4 uStack00000000000001e4;
  byte bStack00000000000001ed;
  byte bStack00000000000001ee;
  undefined4 uVar7;
  
  *(undefined4 *)(unaff_x29 + -0x14) = param_3;
  bVar2 = OVRInput_IsControllerConnected_mC3BA5BE3D3A5642D36965D4CD82525C989F85E9A
                    (*(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70),in_stack_000000b8);
  *(byte *)(unaff_x29 + -0x15) = bVar2 & 1;
  if (((((*(byte *)(unaff_x29 + -0x15) & 1) != (*(byte *)(*(long *)(unaff_x29 + -8) + 0x98) & 1)) ||
       ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x99) & 1) == 0)) ||
      (*(int *)(unaff_x29 + -0x14) != *(int *)(*(long *)(unaff_x29 + -8) + 0x9c))) ||
     ((*(byte *)(*(long *)(unaff_x29 + -8) + 0x91) & 1) !=
      (*(byte *)(*(long *)(unaff_x29 + -8) + 0x92) & 1))) {
    if (*(int *)(*(long *)(unaff_x29 + -8) + 0x94) == 2) {
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -0x28) = uVar6;
        *(undefined4 *)(unaff_x29 + -0x34) = 0;
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x28);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x30) = uVar6;
        *(uint *)(unaff_x29 + -0x34) = (uint)(*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1);
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x30);
      }
      NullCheck(*(void **)(unaff_x29 + -0x40));
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
                (*(undefined8 *)(unaff_x29 + -0x40),*(int *)(unaff_x29 + -0x34) != 0,0);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -0x48) = uVar6;
        *(undefined4 *)(unaff_x29 + -0x54) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x48);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x50) = uVar6;
        *(uint *)(unaff_x29 + -0x54) = (uint)(*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 2);
        *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x50);
      }
      NullCheck(*(void **)(unaff_x29 + -0x60));
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
                (*(undefined8 *)(unaff_x29 + -0x60),*(int *)(unaff_x29 + -0x54) != 0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x30);
        NullCheck(pGVar5);
        uVar6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                          (pGVar5,(MethodInfo *)*in_stack_000000c0);
        *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x68);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x38);
        NullCheck(pGVar5);
        uVar6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                          (pGVar5,(MethodInfo *)*in_stack_000000c0);
        *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
        *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x70);
      }
      NullCheck(*(void **)(unaff_x29 + -0x80));
      *(undefined8 *)(*(long *)(unaff_x29 + -0x80) + 0x80) = *(undefined8 *)(unaff_x29 + -0x78);
      Il2CppCodeGenWriteBarrier
                ((void **)(*(long *)(unaff_x29 + -0x80) + 0x80),*(void **)(unaff_x29 + -0x78));
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -8);
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x30);
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x88);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -8);
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38);
        *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x90);
      }
      NullCheck(*(void **)(unaff_x29 + -0xa0));
      *(undefined8 *)(*(long *)(unaff_x29 + -0xa0) + 0x88) = *(undefined8 *)(unaff_x29 + -0x98);
      Il2CppCodeGenWriteBarrier
                ((void **)(*(long *)(unaff_x29 + -0xa0) + 0x88),*(void **)(unaff_x29 + -0x98));
    }
    else if (*(int *)(*(long *)(unaff_x29 + -8) + 0x94) == 3) {
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x40);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
        *(undefined4 *)(unaff_x29 + -0xb4) = 0;
        *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xa8);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xb0) = uVar6;
        *(uint *)(unaff_x29 + -0xb4) = (uint)(*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1);
        *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(unaff_x29 + -0xb0);
      }
      NullCheck(*(void **)(unaff_x29 + -0xc0));
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
                (*(undefined8 *)(unaff_x29 + -0xc0),*(int *)(unaff_x29 + -0xb4) != 0,0);
      uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -200) = uVar6;
        *(undefined4 *)(unaff_x29 + -0xd4) = 0;
        *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -200);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar6;
        *(uint *)(unaff_x29 + -0xd4) = (uint)(*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 2);
        *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xd0);
      }
      NullCheck(*(void **)(unaff_x29 + -0xe0));
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92
                (*(undefined8 *)(unaff_x29 + -0xe0),*(int *)(unaff_x29 + -0xd4) != 0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x40);
        NullCheck(pGVar5);
        uVar6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                          (pGVar5,(MethodInfo *)*in_stack_000000c0);
        *(undefined8 *)(unaff_x29 + -0xf8) = uVar6;
        *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0xe8);
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x48);
        NullCheck(pGVar5);
        uVar6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                          (pGVar5,(MethodInfo *)*in_stack_000000c0);
        *(undefined8 *)(unaff_x29 + -0xf8) = uVar6;
        *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0xf0);
      }
      NullCheck(*(void **)(unaff_x29 + -0x100));
      *(undefined8 *)(*(long *)(unaff_x29 + -0x100) + 0x80) = *(undefined8 *)(unaff_x29 + -0xf8);
      Il2CppCodeGenWriteBarrier
                ((void **)(*(long *)(unaff_x29 + -0x100) + 0x80),*(void **)(unaff_x29 + -0xf8));
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
      }
      else {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
      }
      NullCheck(pvVar3);
      *(void **)((long)pvVar3 + 0x88) = pvVar4;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x88),pvVar4);
    }
    else if (*(int *)(*(long *)(unaff_x29 + -8) + 0x94) == 1) {
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1;
      }
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar1,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 2;
      }
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar1);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        pvVar4 = *(void **)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x20);
        NullCheck(pGVar5);
        pvVar3 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                   (pGVar5,(MethodInfo *)*in_stack_000000c0);
      }
      else {
        pvVar4 = *(void **)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x28);
        NullCheck(pGVar5);
        pvVar3 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                   (pGVar5,(MethodInfo *)*in_stack_000000c0);
      }
      NullCheck(pvVar4);
      *(void **)((long)pvVar4 + 0x80) = pvVar3;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar4 + 0x80),pvVar3);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
      }
      else {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
      }
      NullCheck(pvVar3);
      *(void **)((long)pvVar3 + 0x88) = pvVar4;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x88),pvVar4);
    }
    else if (*(int *)(*(long *)(unaff_x29 + -8) + 0x94) == 4) {
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1;
      }
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar1,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 2;
      }
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar1);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        pvVar4 = *(void **)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x50);
        NullCheck(pGVar5);
        pvVar3 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                   (pGVar5,(MethodInfo *)*in_stack_000000c0);
      }
      else {
        pvVar4 = *(void **)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x58);
        NullCheck(pGVar5);
        pvVar3 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                   (pGVar5,(MethodInfo *)*in_stack_000000c0);
      }
      NullCheck(pvVar4);
      *(void **)((long)pvVar4 + 0x80) = pvVar3;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar4 + 0x80),pvVar3);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      }
      else {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      }
      NullCheck(pvVar3);
      *(void **)((long)pvVar3 + 0x88) = pvVar4;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x88),pvVar4);
    }
    else {
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x20);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x28);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x30);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x38);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x48);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,0,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1;
      }
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar1,0);
      pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
      if ((*(byte *)(unaff_x29 + -0x15) & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 2;
      }
      NullCheck(pvVar3);
      GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar1,0);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        pvVar4 = *(void **)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x60);
        NullCheck(pGVar5);
        pvVar3 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                   (pGVar5,(MethodInfo *)*in_stack_000000c0);
      }
      else {
        pvVar4 = *(void **)(unaff_x29 + -8);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)
                  (*(long *)(unaff_x29 + -8) + 0x68);
        NullCheck(pGVar5);
        pvVar3 = (void *)GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3
                                   (pGVar5,(MethodInfo *)*in_stack_000000c0);
      }
      NullCheck(pvVar4);
      *(void **)((long)pvVar4 + 0x80) = pvVar3;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar4 + 0x80),pvVar3);
      if (*(int *)(*(long *)(unaff_x29 + -8) + 0x70) == 1) {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      }
      else {
        pvVar3 = *(void **)(unaff_x29 + -8);
        pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x68);
      }
      NullCheck(pvVar3);
      *(void **)((long)pvVar3 + 0x88) = pvVar4;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x88),pvVar4);
    }
    *(byte *)(*(long *)(unaff_x29 + -8) + 0x98) = *(byte *)(unaff_x29 + -0x15) & 1;
    *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x99) = 1;
    *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x9c) = *(undefined4 *)(unaff_x29 + -0x14);
    *(byte *)(*(long *)(unaff_x29 + -8) + 0x92) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x91) & 1;
  }
  bStack00000000000001ee = *(byte *)(*(long *)(unaff_x29 + -8) + 0x91) & 1;
  bStack00000000000001ed = *(byte *)(unaff_x29 + -0x15) & 1;
  *(bool *)(unaff_x29 + -0x16) = (bStack00000000000001ee & bStack00000000000001ed) != 0;
  *(undefined4 *)(unaff_x29 + -0x1c) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x74);
  uStack00000000000001e4 = *(undefined4 *)(unaff_x29 + -0x1c);
  switch(uStack00000000000001e4) {
  case 0:
    break;
  case 1:
    if (*(int *)(unaff_x29 + -0x14) == 2) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
    break;
  case 2:
    if (*(int *)(unaff_x29 + -0x14) != 1) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
    break;
  case 3:
    if (*(int *)(unaff_x29 + -0x14) != 2) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
    break;
  case 4:
    if (*(int *)(unaff_x29 + -0x14) != 0) {
      *(undefined1 *)(unaff_x29 + -0x16) = 0;
    }
  }
  bStack00000000000001d3 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x78) & 1;
  if (bStack00000000000001d3 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
    bVar2 = OVRPlugin_IsControllerDrivenHandPosesEnabled_m3AAF0B439A4B61B782CC76FC8BD651229E088533
                      (0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000d8);
      bVar2 = OVRPlugin_AreControllerDrivenHandPosesNatural_mC5F1D327BC5B0A79190FEA4433F9FC4F488445A7
                        (0);
      if ((bVar2 & 1) != 0) {
        *(undefined1 *)(unaff_x29 + -0x16) = 0;
      }
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x88);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bStack00000000000001c7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar6,0);
  bStack00000000000001c7 = bStack00000000000001c7 & 1;
  if (bStack00000000000001c7 != 0) {
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x88);
    bVar2 = *(byte *)(unaff_x29 + -0x16);
    NullCheck(pvVar3);
    GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(pvVar3,bVar2 & 1,0);
  }
  uVar6 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x80);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000e0);
  bStack00000000000001a7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar6,0);
  bStack00000000000001a7 = bStack00000000000001a7 & 1;
  if (bStack00000000000001a7 != 0) {
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000194 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    bStack0000000000000193 =
         OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(1,uStack0000000000000194,0);
    bStack0000000000000193 = bStack0000000000000193 & 1;
    if (bStack0000000000000193 == 0) {
      uVar6 = *in_stack_000000f0;
      uVar7 = 0;
    }
    else {
      uVar6 = *in_stack_000000f0;
      uVar7 = 0x3f800000;
    }
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(uVar7,pvVar3,uVar6);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000184 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    bStack0000000000000183 =
         OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(2,uStack0000000000000184,0);
    bStack0000000000000183 = bStack0000000000000183 & 1;
    if (bStack0000000000000183 == 0) {
      uVar6 = *in_stack_000000e8;
      uVar7 = 0;
    }
    else {
      uVar6 = *in_stack_000000e8;
      uVar7 = 0x3f800000;
    }
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(uVar7,pvVar3,uVar6);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000174 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    bStack0000000000000173 =
         OVRInput_Get_m8CF227684F49E1C26239D78F826E11A956E909C1(0x100,uStack0000000000000174,0);
    bStack0000000000000173 = bStack0000000000000173 & 1;
    if (bStack0000000000000173 == 0) {
      uVar6 = *in_stack_000000f8;
      uVar7 = 0;
    }
    else {
      uVar6 = *in_stack_000000f8;
      uVar7 = 0x3f800000;
    }
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(uVar7,pvVar3,uVar6);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000164 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    uStack000000000000000c = 1;
    uStack000000000000014c =
         OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1,uStack0000000000000164,0);
    uStack0000000000000154 = param_2;
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uStack000000000000014c,pvVar3,*(undefined8 *)StringLiteral_464,0);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack000000000000013c = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8
              (uStack000000000000000c,uStack000000000000013c,0);
    uStack0000000000000124 = param_2;
    uStack000000000000012c = param_2;
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uStack0000000000000124,pvVar3,*(undefined8 *)StringLiteral_462,0);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000114 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    uVar7 = OVRSimpleJSON_JSONNode__get_Value(uStack000000000000000c,uStack0000000000000114,0);
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uVar7,pvVar3,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Dictionary<string,_Type>>_MoveNext__
               ,0);
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    uStack0000000000000104 = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
    uVar7 = OVRSimpleJSON_JSONNode__get_Value(4,uStack0000000000000104,0);
    NullCheck(pvVar3);
    Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE
              (uVar7,pvVar3,*(undefined8 *)StringLiteral_463,0);
  }
  return;
}


