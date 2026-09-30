/*
FUNCTION_NAME: Autohand.HandBase$$<SetHandCollidersRecursive>g__AddHandCol|108_0
ENTRY_POINT: 00e94718
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Autohand_HandBase__<SetHandCollidersRecursive>g__AddHandCol_108_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(PTR_DAT_033ee5f8);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_get_Item__
                    );
  *(undefined1 *)(unaff_x20 + 0x1d) = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  FUN_0268e9d0();
  FUN_0268f270();
  *(undefined2 *)(unaff_x19 + 0xf8) = 0x100;
  if (*(long *)(unaff_x19 + 0x108) != 0) {
    FUN_00e7cf0c(*(long *)(unaff_x19 + 0x108),0);
    puVar3 = Method_RhythmGameStarter_TrackManager_<>c__DisplayClass25_0_<SetUpNotePool>b__0__;
    puVar2 = Method_System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_get_Item__;
    puVar1 = 
    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_XmlSqlBinaryReader_NamespaceDecl>_MoveNext__
    ;
    if (*(long *)(unaff_x19 + 0x108) != 0) {
      FUN_00e7cad0(*(long *)(unaff_x19 + 0x108),0);
      FUN_00fdf628(*(undefined8 *)puVar1,0);
      FUN_00fdf628(*(undefined8 *)puVar3,0);
      FUN_00fdf628(*(undefined8 *)puVar2,0);
      puVar5 = StringLiteral_9781;
      puVar4 = StringLiteral_9110;
      puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
      puVar2 = Oculus_Platform_Models_NetSyncSession_TypeInfo;
      puVar1 = PTR_DAT_033ed698;
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        FUN_01323390(*(long *)(unaff_x19 + 0x88),&stack0x00000008,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                    );
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar6 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar5), (uVar6 & 1) != 0) {
          lVar7 = FUN_00ac6fa8(&stack0x00000020,*(undefined8 *)puVar2);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_010c2c5c(lVar7,&stack0x00000008,*(undefined8 *)puVar1);
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00fde460(in_stack_00000008,0);
        }
        FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar4);
        FUN_0268ea48(0x3f800000);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03774e19 == '\0') {
          thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
          DAT_03774e19 = '\x01';
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar3;
        }
        if (**(long **)(lVar7 + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(lVar7 + 0xb8) + 0x84) = 1;
          FUN_00fdf628(*(undefined8 *)(unaff_x19 + 200),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


