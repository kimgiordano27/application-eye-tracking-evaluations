/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 01cc5140
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 154
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x01cc5520) */
/* WARNING: Removing unreachable block (ram,0x01cc55dc) */

void System_Array__InternalArray__get_Item<OVRPlugin_BodyJointLocation>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  void *unaff_x19;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  
  thunk_FUN_01ac7298();
  in_stack_000000a0 = in_stack_00000100;
  in_stack_000000a8 = uStack0000000000000108;
  uVar5 = FUN_01cc1a10();
  FUN_01c9b9b8(uVar5 & 1,0);
                    /* try { // try from 01cc5170 to 01dc5177 has its CatchHandler @ 01cc5194 */
                    /* try { // try from 01cc5178 to 01dc517b has its CatchHandler @ 01cc5184 */
                    /* try { // try from 01cc517c to 01dc517f has its CatchHandler @ 01cc5194 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 01cc509c with catch @ 01cc5180
                       try { // try from 01cc5180 to 01dc51ab has its CatchHandler @ 01cc4d54 */
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 01cc5178 with catch @ 01cc5184
                        */
  FUN_01cac9a8(&stack0x00000118,&stack0x000000c0,uStack000000000000010c,0);
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 01cc5084 with catch @ 01cc5188
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 01cc50ac with catch @ 01cc518c
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 01cc50c8 with catch @ 01cc5190
                        */
  unaff_x22[1] = in_stack_00000120;
  *unaff_x22 = in_stack_00000118;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 01cc5170 with catch @ 01cc5194
                       catch(type#1 @ 03b4f5b8) { ... } // from try @ 01cc517c with catch @ 01cc5194
                        */
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    System_Array__InternalArray__set_Item<OVRRaycaster_RaycastHit>
              (*(long *)(unaff_x20 + 0x30),&stack0x00000100,&stack0x000000b0,0);
    puVar3 = StringLiteral_1248;
                    /* try { // try from 01cc51ac to 01dc51af has its CatchHandler @ 01cc51d8 */
                    /* try { // try from 01cc51b0 to 01dc51e7 has its CatchHandler @ 01cc4d54 */
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      FUN_01d047b8(*(long *)(unaff_x20 + 0x30),&stack0x000000b0,&stack0x00000100,0);
                    /* catch() { ... } // from try @ 01cc51ac with catch @ 01cc51d8 */
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
                    /* try { // try from 01cc51e8 to 01dc51ef has its CatchHandler @ 01cc5204 */
                    /* try { // try from 01cc51f0 to 01dc51fb has its CatchHandler @ 01cc4d54 */
      plVar6 = (long *)FUN_01d01ae8((long)unaff_x19 + 0x50,0);
      puVar4 = StringLiteral_1246;
      puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      do {
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01cc5258;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)puVar2,0);
LAB_01cc5258:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_01cc5370;
          lVar9 = *plVar6;
          lVar8 = *(long *)puVar1;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_01cc5348;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_01cc5330;
        }
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_01cc52b4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)puVar4,0);
LAB_01cc52b4:
        auVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        _in_stack_00000090 = auVar13;
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_01d03de8(*(long *)(unaff_x20 + 0x30),&stack0x00000090,&stack0x000000b0,0);
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        System_Array__InternalArray__set_Item<OVRRaycaster_RaycastHit>
                  (*(long *)(unaff_x20 + 0x30),&stack0x00000090,&stack0x00000100,0);
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_01d041cc(*(long *)(unaff_x20 + 0x30),&stack0x000000b0,&stack0x00000090,0);
      } while( true );
    }
  }
  goto LAB_01cc55d8;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_01cc5330:
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01cc5364;
    }
  }
LAB_01cc5348:
  puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,lVar8,0);
LAB_01cc5364:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_01cc5370:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar6 = (long *)FUN_01d01ae8((long)unaff_x19 + 0x28,0);
  puVar2 = StringLiteral_1246;
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01cc53f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)puVar3,0);
LAB_01cc53f8:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_01cc5514;
      lVar9 = *plVar6;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_01cc54ec;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01cc5454;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)puVar2,0);
LAB_01cc5454:
    auVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    _in_stack_00000080 = auVar13;
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d041cc(*(long *)(unaff_x20 + 0x30),&stack0x00000080,&stack0x000000b0,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d047b8(*(long *)(unaff_x20 + 0x30),&stack0x00000080,&stack0x00000100,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_01d03de8(*(long *)(unaff_x20 + 0x30),&stack0x000000b0,&stack0x00000080,0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01cc5508;
    }
  }
LAB_01cc54ec:
  puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,lVar8,0);
LAB_01cc5508:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_01cc5514:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01cc5760();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    FUN_02396e54(*(long *)(unaff_x20 + 0x30),&stack0x00000100,*(undefined8 *)StringLiteral_1247);
    lVar8 = *(long *)(unaff_x20 + 0x40);
    memcpy(&stack0x00000008,unaff_x19,0x78);
    if (lVar8 != 0) {
      uVar12 = *(undefined8 *)StringLiteral_1237;
      memcpy(&stack0x00000118,&stack0x00000008,0x78);
      FUN_024290c8(lVar8,&stack0x00000118,uVar12);
      return;
    }
  }
LAB_01cc55d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


