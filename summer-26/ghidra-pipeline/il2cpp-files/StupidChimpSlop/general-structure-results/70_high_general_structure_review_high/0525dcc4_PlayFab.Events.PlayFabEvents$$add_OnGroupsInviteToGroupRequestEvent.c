/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGroupsInviteToGroupRequestEvent
ENTRY_POINT: 0525dcc4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnGroupsInviteToGroupRequestEvent(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long lVar6;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  long in_stack_00000120;
  undefined4 uStack0000000000000128;
  undefined1 uStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  
  *(undefined8 *)(unaff_x25 + 0x30) =
       *(undefined8 *)System_Collections_Generic_HashSet<Collider>_TypeInfo;
  thunk_FUN_02dc1ef0((undefined8 *)(unaff_x25 + 0x30));
  uVar1 = FUN_05250cb0();
  if ((*(uint *)(unaff_x25 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x25 + 0x38) = uVar1;
    thunk_FUN_02dc1ef0((undefined8 *)(unaff_x25 + 0x38),uVar1);
    if (4 < *(uint *)(unaff_x25 + 0x18)) {
      *(undefined8 *)(unaff_x25 + 0x40) =
           *(undefined8 *)System_Collections_Generic_HashSet<byte>_TypeInfo;
      thunk_FUN_02dc1ef0((undefined8 *)(unaff_x25 + 0x40));
      uVar1 = FUN_05000654(&stack0x00000128,0);
      if (5 < *(uint *)(unaff_x25 + 0x18)) {
        *(undefined8 *)(unaff_x25 + 0x48) = uVar1;
        thunk_FUN_02dc1ef0();
        FUN_04e80ce4();
        lVar6 = *(long *)PTR_DAT_06648110;
        lVar3 = *(long *)(lVar6 + 0x38);
        if (lVar3 == 0) {
          FUN_02d87268(lVar6);
          lVar3 = *(long *)(lVar6 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d8720c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        if (unaff_x24 != (long *)0x0) {
          lVar3 = *unaff_x24;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0664b728) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_0525de24;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_02d87540();
LAB_0525de24:
          (*(code *)*puVar2)();
          in_stack_00000130 = *(undefined8 *)PTR_DAT_0664b720;
          in_stack_00000140 = CONCAT44(in_stack_00000140._4_4_,*(undefined4 *)unaff_x22);
          in_stack_00000138 = 0xffffffffffffffff;
          uVar1 = FUN_05038b8c(&stack0x00000130,0);
          uVar1 = FUN_04e80678(*(undefined8 *)
                                System_Collections_Generic_HashSet<IClippable>_TypeInfo,uVar1);
          in_stack_00000098 = unaff_x22[1];
          in_stack_00000090 = *unaff_x22;
          in_stack_000000a8 = unaff_x22[3];
          in_stack_000000a0 = unaff_x22[2];
          in_stack_000000b8 = unaff_x22[5];
          in_stack_000000b0 = unaff_x22[4];
          FUN_05252680(&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0x18),uVar1,&stack0x00000090);
          lVar3 = *(long *)(unaff_x19 + 0x58);
          if (lVar3 != 0) {
            in_stack_00000148 = unaff_x22[3];
            in_stack_00000140 = unaff_x22[2];
            in_stack_00000158 = unaff_x22[5];
            in_stack_00000150 = unaff_x22[4];
            in_stack_00000138 = unaff_x22[1];
            in_stack_00000130 = *unaff_x22;
            (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),unaff_w20,unaff_w21,uStack000000000000012c,
                       &stack0x00000130,&stack0x000000d0,*(undefined8 *)(lVar3 + 0x28));
          }
          memcpy(&stack0x00000040,&stack0x000000d0,0x50);
          lVar3 = thunk_FUN_02d8a638(*(undefined8 *)System_Func<SpriteCharacter,_uint>_TypeInfo);
          FUN_05252958();
          if (in_stack_00000120 != 0) {
            FUN_0479a420(in_stack_00000120,uStack000000000000012c,lVar3,
                         *(undefined8 *)System_Collections_Generic_HashSet<Binding>_TypeInfo);
            if (*(long *)(unaff_x19 + 0x68) != 0) {
              uVar4 = FUN_047fe5d8(*(long *)(unaff_x19 + 0x68),*(undefined4 *)unaff_x22,
                                   (long)&stack0x000000c8 + 4,
                                   *(undefined8 *)
                                    Unity_XR_CoreUtils_Collections_HashSetList<XRGrabInteractable>_TypeInfo
                                  );
              if ((uVar4 & 1) != 0) {
                if (lVar3 == 0) goto LAB_0525dfdc;
                *(undefined4 *)(lVar3 + 0x9c) = in_stack_000000c8._4_4_;
              }
              return;
            }
          }
        }
LAB_0525dfdc:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


