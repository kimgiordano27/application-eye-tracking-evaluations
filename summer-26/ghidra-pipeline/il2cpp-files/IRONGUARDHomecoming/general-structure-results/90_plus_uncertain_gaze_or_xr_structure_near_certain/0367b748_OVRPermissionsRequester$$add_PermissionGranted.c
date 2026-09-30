/*
FUNCTION_NAME: OVRPermissionsRequester$$add_PermissionGranted
ENTRY_POINT: 0367b748
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0367b910) */

byte OVRPermissionsRequester__add_PermissionGranted
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  byte in_w9;
  int *piVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  undefined8 *unaff_x24;
  byte unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  ulong in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  float fStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  do {
    if ((param_4 & 1) != 0) {
      plVar6 = *(long **)(unaff_x20 + 0x38);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar6;
      uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x29) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0367b7a4;
          }
          uVar5 = uVar5 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x29,0);
LAB_0367b7a4:
                    /* try { // try from 0367b7b0 to 0377b7b3 has its CatchHandler @ 0367b7bc */
                    /* try { // try from 0367b7b4 to 0377b7d7 has its CatchHandler @ 0367b658 */
      uVar5 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000040,puVar2[1]);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0367b70c with catch @ 0367b7b8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0367b7b0 with catch @ 0367b7bc
                        */
      in_w9 = 0;
      if ((uVar5 & 1) != 0) {
        in_stack_00000028 = uStack0000000000000078;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0367b6d4 with catch @ 0367b7c0
                        */
        in_stack_00000020 = in_stack_00000070;
        uStack0000000000000034 = uStack0000000000000084;
        uStack0000000000000030 = uStack0000000000000080;
        fVar8 = fStack000000000000007c;
                    /* try { // try from 0367b7d8 to 0377b7db has its CatchHandler @ 0367b7f0 */
        fVar7 = (float)FUN_0367b9f8();
        fVar7 = fVar7 * fStack0000000000000040;
                    /* catch() { ... } // from try @ 0367b7d8 with catch @ 0367b7f0 */
        fVar8 = fVar8 * fStack0000000000000044;
        fVar9 = param_3 * in_stack_00000048;
                    /* try { // try from 0367b7fc to 0377b807 has its CatchHandler @ 0367b81c */
        lVar3 = *(long *)(unaff_x20 + 0x68);
        in_stack_00000010 = 0;
        _fStack0000000000000018 = 0;
        FUN_0367c924(&stack0x00000010,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        param_3 = fStack0000000000000018;
        FUN_02ba874c(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,fStack0000000000000018,
                     uStack000000000000001c,lVar3,unaff_x21,*unaff_x24);
        in_w9 = unaff_w25 & unaff_s8 < fVar9 + fVar7 + fVar8;
      }
    }
    do {
      unaff_w25 = in_w9;
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0367b5f4;
          }
          uVar5 = uVar5 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0367b5f4:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_0367b8c4;
        lVar3 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_0367b89c;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0367b884;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0367b650;
          }
          uVar5 = uVar5 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0367b650:
      unaff_x21 = (*(code *)*puVar2)();
      plVar6 = *(long **)(unaff_x20 + 0x28);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
            goto LAB_0367b6b8;
          }
          uVar5 = uVar5 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x28,0x12);
LAB_0367b6b8:
      uVar5 = (*(code *)*puVar2)(plVar6,&stack0x00000070,puVar2[1]);
      in_w9 = 0;
    } while ((uVar5 & 1) == 0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar6;
    uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_0367b730;
        }
        uVar5 = uVar5 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x28,9);
LAB_0367b730:
    param_4 = (*(code *)*puVar2)(plVar6,uVar1,&stack0x00000050,puVar2[1]);
    in_w9 = 0;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar4 = piVar4 + 4;
    if (uVar5 == 0) break;
LAB_0367b884:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0367b8b8;
    }
  }
LAB_0367b89c:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0367b8b8:
  (*(code *)*puVar2)();
LAB_0367b8c4:
  return unaff_w25 & 1;
}


