/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Locale$$CurrentLanguageCode
ENTRY_POINT: 05ab90f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Locale__CurrentLanguageCode(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x238));
  FUN_02d6084c(Method_System_Collections_Generic_Dictionary<LocomotionMediator,_Pose>_TryGetValue__)
  ;
  FUN_02d6084c(
              Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout>__ctor__
              );
  FUN_02d6084c(Method_System_Collections_Generic_Dictionary<LocomotionMediator,_Pose>_set_Item__);
  FUN_02d6084c(Method_System_Collections_Generic_Dictionary<JsonSchemaNode,_JsonSchemaModel>__ctor__
              );
  FUN_02d6084c(Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>_TryGetValue__
              );
  FUN_02d6084c(
              Method_System_Collections_Generic_Dictionary<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>__ctor__
              );
  *(undefined1 *)(unaff_x20 + 0x6f3) = 1;
  puVar4 = Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout>__ctor__;
  in_stack_000000e8 = unaff_x19[5];
  in_stack_000000e0 = unaff_x19[4];
  in_stack_000000f0 = unaff_x19[6];
  in_stack_000000c0 = *unaff_x19;
  lVar1 = unaff_x23 + 0x28;
  in_stack_000000c8 = (undefined4)unaff_x19[1];
  uStack00000000000000cc = (undefined4)((ulong)unaff_x19[1] >> 0x20);
  in_stack_000000d8 = (undefined4)unaff_x19[3];
  uStack00000000000000dc = (undefined4)((ulong)unaff_x19[3] >> 0x20);
  in_stack_000000d0 = (undefined4)unaff_x19[2];
  uStack00000000000000d4 = (undefined4)((ulong)unaff_x19[2] >> 0x20);
  uVar8 = FUN_03daab60(lVar1,&stack0x000000c0,*unaff_x21);
  plVar2 = (long *)(unaff_x23 + 0x40);
  FUN_03d7ff14(plVar2,uVar8,*unaff_x24);
  in_stack_000000c0 = unaff_x19[3];
  uStack00000000000000d4 = (undefined4)*(undefined8 *)((long)unaff_x19 + 0x2c);
  in_stack_000000d8 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0x2c) >> 0x20);
  in_stack_000000d0 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0x24) >> 0x20);
  in_stack_000000c8 = (undefined4)unaff_x19[4];
  uStack00000000000000cc = (undefined4)((ulong)unaff_x19[4] >> 0x20);
  uVar9 = FUN_03dad580(unaff_x23 + 0x18,&stack0x000000c0,*unaff_x26);
  lVar10 = FUN_03d82414(unaff_x23 + 0x38,uVar9,*unaff_x25);
  iVar3 = *(int *)(lVar10 + 0x1c) + -1;
  *(int *)(lVar10 + 0x1c) = iVar3;
  if (iVar3 == 0) {
    FUN_05ab8ef0();
  }
  puVar7 = 
  Method_System_Collections_Generic_Dictionary<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>__ctor__
  ;
  puVar6 = Method_System_Collections_Generic_Dictionary<LocomotionMediator,_Pose>_set_Item__;
  puVar5 = Method_System_Collections_Generic_Dictionary<LocomotionMediator,_Pose>_TryGetValue__;
  lVar10 = *plVar2;
  if ((*(byte *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  puVar11 = (undefined8 *)FUN_03d7ff14(plVar2,*(int *)(lVar10 + 8) + -1,*unaff_x24);
  in_stack_000000e8 = puVar11[5];
  in_stack_000000e0 = puVar11[4];
  in_stack_000000c0 = *puVar11;
  in_stack_000000f0 = puVar11[6];
  in_stack_000000c8 = (undefined4)puVar11[1];
  uStack00000000000000cc = (undefined4)((ulong)puVar11[1] >> 0x20);
  in_stack_000000d8 = (undefined4)puVar11[3];
  uStack00000000000000dc = (undefined4)((ulong)puVar11[3] >> 0x20);
  in_stack_000000d0 = (undefined4)puVar11[2];
  uStack00000000000000d4 = (undefined4)((ulong)puVar11[2] >> 0x20);
  FUN_03daabe8(lVar1,&stack0x000000c0,uVar8,*(undefined8 *)puVar7);
  in_stack_000000e8 = unaff_x19[5];
  in_stack_000000e0 = unaff_x19[4];
  in_stack_000000c0 = *unaff_x19;
  in_stack_000000f0 = unaff_x19[6];
  in_stack_000000c8 = (undefined4)unaff_x19[1];
  uStack00000000000000cc = (undefined4)((ulong)unaff_x19[1] >> 0x20);
  in_stack_000000d8 = (undefined4)unaff_x19[3];
  uStack00000000000000dc = (undefined4)((ulong)unaff_x19[3] >> 0x20);
  in_stack_000000d0 = (undefined4)unaff_x19[2];
  uStack00000000000000d4 = (undefined4)((ulong)unaff_x19[2] >> 0x20);
  FUN_03daa9e8(lVar1,&stack0x000000c0,*(undefined8 *)puVar6);
  FUN_03d803ec(plVar2,uVar8,*(undefined8 *)puVar5);
  return;
}


