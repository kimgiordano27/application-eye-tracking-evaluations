/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<UInt32Enum,-object>$$get_Item
ENTRY_POINT: 03373634
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


long System_Collections_Generic_Dictionary<UInt32Enum,_object>__get_Item
               (long *param_1,undefined1 param_2 [16],float param_3,ulong param_4)

{
  void *pvVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  char *unaff_x21;
  long lVar7;
  undefined8 unaff_x22;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_000000a8;
  
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((param_4 & 1) == 0) {
    iVar4 = OVRPlugin__StartBodyTracking2();
    bVar3 = iVar4 == 0;
  }
  else {
    bVar3 = true;
  }
  *unaff_x21 = bVar3;
  iVar4 = OVRPlugin__StartBodyTracking2();
  if (iVar4 == 4) {
    bVar3 = true;
  }
  else {
    iVar4 = OVRPlugin__StartBodyTracking2();
    bVar3 = iVar4 == 3;
  }
  lVar6 = in_stack_000000a8;
  *(bool *)unaff_x22 = bVar3;
  if ((param_4 & 1) != 0) {
    uVar8 = FUN_0322bb6c();
    if (lVar6 == 0) goto LAB_03373934;
    *(undefined4 *)(lVar6 + 0x100) = uVar8;
    *(float *)(lVar6 + 0x104) = param_3;
  }
  lVar6 = in_stack_000000a8;
  puVar2 = PTR_DAT_06e4d340;
  if (*unaff_x21 == '\0') {
    fVar9 = (float)FUN_0322bb6c();
    lVar7 = in_stack_000000a8;
    if ((in_stack_000000a8 == 0) || (lVar6 == 0)) goto LAB_03373934;
    *(ulong *)(lVar6 + 0x108) =
         CONCAT44(param_3 - (float)((ulong)*(undefined8 *)(in_stack_000000a8 + 0x100) >> 0x20),
                  fVar9 - (float)*(undefined8 *)(in_stack_000000a8 + 0x100));
    uVar8 = FUN_0322bb6c();
  }
  else {
    if (DAT_0722a89c == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e4d340);
      DAT_0722a89c = '\x01';
    }
    lVar7 = in_stack_000000a8;
    if (lVar6 == 0) goto LAB_03373934;
    *(undefined8 *)(lVar6 + 0x108) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
    uVar8 = FUN_0322bb6c();
    if (lVar7 == 0) goto LAB_03373934;
  }
  *(undefined4 *)(lVar7 + 0x100) = uVar8;
  *(float *)(lVar7 + 0x104) = param_3;
  if (in_stack_000000a8 == 0) goto LAB_03373934;
  *(undefined4 *)(in_stack_000000a8 + 0x144) = 0;
  uVar5 = OVRPlugin__StartBodyTracking2();
  if ((int)uVar5 == 4) {
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000008 = 0;
    in_stack_00000000 = 0;
    if (in_stack_000000a8 == 0) goto LAB_03373934;
    pvVar1 = (void *)(in_stack_000000a8 + 0x50);
    memcpy(pvVar1,&stack0x00000000,0x50);
    thunk_FUN_01656ef8(pvVar1,0);
  }
  else {
    if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_03373934;
    FUN_0336e8d0(uVar5,in_stack_000000a8,*(undefined8 *)(unaff_x20 + 0x18));
    FUN_03372394(&stack0x00000050,*(undefined8 *)(unaff_x20 + 0x18));
    lVar6 = in_stack_000000a8;
    memcpy(&stack0x00000000,&stack0x00000050,0x50);
    if (lVar6 == 0) goto LAB_03373934;
    pvVar1 = (void *)(lVar6 + 0x50);
    memcpy(pvVar1,&stack0x00000000,0x50);
    thunk_FUN_01656ef8(pvVar1,0);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    if (lVar6 == 0) goto LAB_03373934;
    iVar4 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar4) {
      FUN_031dd574(*(undefined8 *)(lVar6 + 0x10),0,iVar4,0);
    }
  }
  lVar6 = in_stack_000000a8;
  uVar8 = FUN_0322bbb4();
  lVar7 = in_stack_000000a8;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x148) = uVar8;
    uVar8 = FUN_0322bbcc();
    lVar6 = in_stack_000000a8;
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x150) = uVar8;
      uVar8 = FUN_0322bbd4();
      lVar7 = in_stack_000000a8;
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x154) = uVar8;
        if (DAT_0722b91f == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e4d340);
          DAT_0722b91f = '\x01';
        }
        uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        fVar9 = (float)FUN_0322bbdc();
        lVar6 = in_stack_000000a8;
        if (lVar7 != 0) {
          *(ulong *)(lVar7 + 0x15c) =
               CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar9,(float)uVar5 * fVar9);
          if (DAT_0722b91f == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e4d340);
            DAT_0722b91f = '\x01';
          }
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          fVar9 = (float)FUN_0322bbe4();
          if (lVar6 != 0) {
            *(ulong *)(lVar6 + 0x164) =
                 CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar9,(float)uVar5 * fVar9);
            return in_stack_000000a8;
          }
        }
      }
    }
  }
LAB_03373934:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


