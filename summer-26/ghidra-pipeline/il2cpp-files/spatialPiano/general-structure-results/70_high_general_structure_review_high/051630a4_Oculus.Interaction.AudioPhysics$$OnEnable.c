/*
FUNCTION_NAME: Oculus.Interaction.AudioPhysics$$OnEnable
ENTRY_POINT: 051630a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined1  [16] Oculus_Interaction_AudioPhysics__OnEnable(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined1 *)(unaff_x20 + 0x194) = 1;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  do {
    uVar4 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 2) = 0;
      unaff_x19[3] = 0;
      goto LAB_05163110;
    }
    iVar2 = (**(code **)(*unaff_x19 + 0x238))();
  } while (iVar2 == 5);
  if (iVar2 < 10) {
    if (iVar2 != 0) {
      if (iVar2 == 9) {
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(PTR_DAT_067c9338 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar5);
        }
        auVar11 = FUN_0516331c();
        return auVar11;
      }
LAB_0516327c:
      thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
      FUN_02a7d698();
      uVar8 = FUN_050656a0(0);
      uVar3 = (**(code **)(*unaff_x19 + 0x238))();
      in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar3);
      uVar9 = thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
      uVar9 = thunk_FUN_02f44ec4(uVar9,&stack0x00000008);
      uVar10 = thunk_FUN_02f6ef30(
                                 System_Collections_Concurrent_ConcurrentQueue<StringBuilder>_TypeInfo
                                 );
      FUN_051b937c(uVar10,uVar8,uVar9,0);
      uVar8 = FUN_05160b1c();
      uVar9 = thunk_FUN_02f6ef30(
                                System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,uVar9);
    }
  }
  else if (iVar2 != 0xb) {
    if (iVar2 == 0x10) {
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      puVar1 = PTR_DAT_067c9988;
      if ((plVar5 != (long *)0x0) && (*plVar5 == *(long *)PTR_DAT_067c9988)) {
        puVar6 = (undefined8 *)thunk_FUN_02f453b8();
        uStack0000000000000018 = puVar6[1];
        uStack0000000000000010 = *puVar6;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        in_stack_00000008 = FUN_050b9f84(&stack0x00000010,0);
        lVar7 = thunk_FUN_02f44ec4(*(undefined8 *)PTR_DAT_067c9980,&stack0x00000008);
        unaff_x19[3] = lVar7;
        *(undefined4 *)(unaff_x19 + 2) = 0x10;
        uVar3 = 8;
        if (((int)unaff_x19[5] == 0) && (uVar3 = 0xc, *(char *)((long)unaff_x19 + 0x71) != '\0')) {
          uVar3 = 8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x24) = uVar3;
      }
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      if (plVar5 != (long *)0x0) {
        if (*(long *)(*plVar5 + 0x40) == *(long *)(*(long *)PTR_DAT_067c9980 + 0x40)) {
          puVar6 = (undefined8 *)thunk_FUN_02f453b8();
          FUN_03e17e94(&stack0x00000020,*puVar6,
                       *(undefined8 *)
                        System_Collections_Concurrent_ConcurrentQueue<Message>_TypeInfo);
          auVar11._8_8_ = in_stack_00000028;
          auVar11._0_8_ = in_stack_00000020;
          return auVar11;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (iVar2 != 0xe) goto LAB_0516327c;
  }
LAB_05163110:
  return ZEXT816(0);
}


