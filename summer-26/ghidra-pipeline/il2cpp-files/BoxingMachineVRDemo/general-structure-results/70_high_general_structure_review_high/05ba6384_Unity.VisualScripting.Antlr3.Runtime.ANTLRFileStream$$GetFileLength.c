/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.ANTLRFileStream$$GetFileLength
ENTRY_POINT: 05ba6384
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Unity_VisualScripting_Antlr3_Runtime_ANTLRFileStream__GetFileLength(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *unaff_x19;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    param_1 = *unaff_x21;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x28) != 0) {
    return;
  }
  uVar2 = FUN_02d60934(*(undefined8 *)
                        Method_Unity_Collections_NativeArray_Enumerator<XRLoadAnchorResult>_MoveNext__
                       ,5);
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar4);
    lVar4 = *unaff_x21;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  thunk_FUN_02dd37b4(puVar3,uVar2);
  lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
  memcpy(&stack0x00000630,unaff_x19,0x6c);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
              + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  memcpy(&stack0x000004e0,&stack0x00000630,0x6c);
  FUN_05b8b468(&stack0x00000550,&stack0x000004e0,0x60,0x20,0);
  memcpy(&stack0x000005c0,&stack0x00000550,0x6c);
  if (lVar4 == 0) {
LAB_05ba6638:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  memcpy(&stack0x00000470,&stack0x000005c0,0x6c);
  if (*(int *)(lVar4 + 0x18) != 0) {
    memcpy((void *)(lVar4 + 0x20),&stack0x00000470,0x6c);
    lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
    memcpy(&stack0x00000390,unaff_x19,0x6c);
    FUN_05b8b468(&stack0x00000400,&stack0x00000390,0x60,0x40,0);
    memcpy(&stack0x00000550,&stack0x00000400,0x6c);
    if (lVar4 == 0) goto LAB_05ba6638;
    memcpy(&stack0x00000320,&stack0x00000550,0x6c);
    if (1 < *(uint *)(lVar4 + 0x18)) {
      memcpy((void *)(lVar4 + 0x8c),&stack0x00000320,0x6c);
      lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
      memcpy(&stack0x00000240,unaff_x19,0x6c);
      FUN_05b8b468(&stack0x000002b0,&stack0x00000240,0x60,0,0);
      memcpy(&stack0x00000400,&stack0x000002b0,0x6c);
      if (lVar4 == 0) goto LAB_05ba6638;
      memcpy(&stack0x000001d0,&stack0x00000400,0x6c);
      if (2 < *(uint *)(lVar4 + 0x18)) {
        memcpy((void *)(lVar4 + 0xf8),&stack0x000001d0,0x6c);
        lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
        memcpy(&stack0x000000f0,unaff_x19,0x6c);
        FUN_05b8b468(&stack0x00000160,&stack0x000000f0,0x60,0,0);
        memcpy(&stack0x000002b0,&stack0x00000160,0x6c);
        if (lVar4 == 0) goto LAB_05ba6638;
        memcpy(&stack0x00000080,&stack0x000002b0,0x6c);
        if (3 < *(uint *)(lVar4 + 0x18)) {
          memcpy((void *)(lVar4 + 0x164),&stack0x00000080,0x6c);
          lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
          if (lVar4 == 0) goto LAB_05ba6638;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if ((uVar1 != 0) && (memcpy(&stack0x00000010,(void *)(lVar4 + 0x20),0x6c), 4 < uVar1)) {
            memcpy((void *)(lVar4 + 0x1d0),&stack0x00000010,0x6c);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


