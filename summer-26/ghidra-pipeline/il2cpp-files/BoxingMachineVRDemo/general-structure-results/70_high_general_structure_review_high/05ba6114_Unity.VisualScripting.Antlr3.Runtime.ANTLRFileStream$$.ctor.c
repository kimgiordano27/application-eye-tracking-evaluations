/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.ANTLRFileStream$$.ctor
ENTRY_POINT: 05ba6114
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_Antlr3_Runtime_ANTLRFileStream___ctor(void)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 unaff_w23;
  undefined8 unaff_x25;
  undefined4 unaff_w26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *puVar6;
  undefined8 in_stack_00000008;
  
  puVar6 = *(undefined8 **)(unaff_x28 + 0xe40);
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_05aef174();
  uVar4 = thunk_FUN_02d9d534(*unaff_x20);
  FUN_05a09518(uVar4,*unaff_x27,0);
  FUN_05aef46c();
  *(undefined4 *)(unaff_x19 + 0x10) = unaff_w26;
  uVar4 = thunk_FUN_02d9d534(*puVar6);
  FUN_0504920c(uVar4,0);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar4;
  thunk_FUN_02dd37b4(unaff_x19 + 0x150,uVar4);
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x25;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0xb8));
  FUN_03dd2b7c(&stack0x00000550);
  uVar3 = FUN_0606b4c4(unaff_w23,0);
  FUN_0609fd24(&stack0x000005c0,0,0,uVar3,0xffffffff,0,0);
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  FUN_060a2ac0(&stack0x00000630,0,0);
  __dest = (void *)(unaff_x19 + 0xe0);
  memcpy(__dest,&stack0x00000630,0x6c);
  FUN_060a2c58(__dest);
  FUN_060a2c6c(__dest,in_stack_00000008._4_4_,0);
  FUN_060a2c7c(__dest,8,0);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__;
  lVar5 = *(long *)
           Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
  ;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x20) == 0) {
    uVar4 = FUN_02d60934(*(undefined8 *)
                          Method_Unity_Collections_NativeArray_Enumerator<XRLoadAnchorResult>_get_Current__
                         ,5);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20);
    *puVar6 = uVar4;
    thunk_FUN_02dd37b4(puVar6,uVar4);
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar5 == 0) goto LAB_05ba6638;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_05ba6634;
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar5 == 0) goto LAB_05ba6638;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_05ba6634;
    *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar5 == 0) goto LAB_05ba6638;
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_05ba6634;
    *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar5 == 0) goto LAB_05ba6638;
    if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_05ba6634;
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14);
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar5 == 0) goto LAB_05ba6638;
    if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_05ba6634;
    *(undefined4 *)(lVar5 + 0x30) = 0;
    lVar5 = *(long *)puVar2;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar5 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 0x28) != 0) {
    return;
  }
  uVar4 = FUN_02d60934(*(undefined8 *)
                        Method_Unity_Collections_NativeArray_Enumerator<XRLoadAnchorResult>_MoveNext__
                       ,5);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar5);
    lVar5 = *(long *)puVar2;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28);
  *puVar6 = uVar4;
  thunk_FUN_02dd37b4(puVar6,uVar4);
  lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
  memcpy(&stack0x00000630,__dest,0x6c);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
              + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  memcpy(&stack0x000004e0,&stack0x00000630,0x6c);
  FUN_05b8b468(&stack0x00000550,&stack0x000004e0,0x60,0x20,0);
  memcpy(&stack0x000005c0,&stack0x00000550,0x6c);
  if (lVar5 == 0) {
LAB_05ba6638:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  memcpy(&stack0x00000470,&stack0x000005c0,0x6c);
  if (*(int *)(lVar5 + 0x18) != 0) {
    memcpy((void *)(lVar5 + 0x20),&stack0x00000470,0x6c);
    lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    memcpy(&stack0x00000390,__dest,0x6c);
    FUN_05b8b468(&stack0x00000400,&stack0x00000390,0x60,0x40,0);
    memcpy(&stack0x00000550,&stack0x00000400,0x6c);
    if (lVar5 == 0) goto LAB_05ba6638;
    memcpy(&stack0x00000320,&stack0x00000550,0x6c);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      memcpy((void *)(lVar5 + 0x8c),&stack0x00000320,0x6c);
      lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      memcpy(&stack0x00000240,__dest,0x6c);
      FUN_05b8b468(&stack0x000002b0,&stack0x00000240,0x60,0,0);
      memcpy(&stack0x00000400,&stack0x000002b0,0x6c);
      if (lVar5 == 0) goto LAB_05ba6638;
      memcpy(&stack0x000001d0,&stack0x00000400,0x6c);
      if (2 < *(uint *)(lVar5 + 0x18)) {
        memcpy((void *)(lVar5 + 0xf8),&stack0x000001d0,0x6c);
        lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
        memcpy(&stack0x000000f0,__dest,0x6c);
        FUN_05b8b468(&stack0x00000160,&stack0x000000f0,0x60,0,0);
        memcpy(&stack0x000002b0,&stack0x00000160,0x6c);
        if (lVar5 == 0) goto LAB_05ba6638;
        memcpy(&stack0x00000080,&stack0x000002b0,0x6c);
        if (3 < *(uint *)(lVar5 + 0x18)) {
          memcpy((void *)(lVar5 + 0x164),&stack0x00000080,0x6c);
          lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
          if (lVar5 == 0) goto LAB_05ba6638;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if ((uVar1 != 0) && (memcpy(&stack0x00000010,(void *)(lVar5 + 0x20),0x6c), 4 < uVar1)) {
            memcpy((void *)(lVar5 + 0x1d0),&stack0x00000010,0x6c);
            return;
          }
        }
      }
    }
  }
LAB_05ba6634:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


