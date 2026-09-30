/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 0514c8f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__StartColocationSessionDiscovery(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long *plVar7;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0514c91c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x19,param_3,0);
LAB_0514c91c:
        uVar3 = (*(code *)*puVar2)(unaff_x19,puVar2[1]);
        if ((uVar3 & 1) == 0) {
          FUN_0514cb80();
          *(undefined8 *)(in_stack_00000048 + 0x50) = 0;
          thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000048 + 0x50),0);
          return 0;
        }
        plVar7 = *(long **)(in_stack_00000048 + 0x50);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0676aab8) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0514c990;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0676aab8,0);
LAB_0514c990:
        uVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        *(undefined8 *)(in_stack_00000048 + 0x58) = uVar4;
        thunk_FUN_02dd37b4();
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_03a38cc8(&stack0x00000008,*(long *)(unaff_x21 + 0x10),*(undefined8 *)PTR_DAT_06762028);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        *(undefined8 *)(in_stack_00000048 + 0x70) = in_stack_00000018;
        *(undefined8 *)(in_stack_00000048 + 0x68) = in_stack_00000010;
        *(undefined8 *)(in_stack_00000048 + 0x60) = in_stack_00000008;
        thunk_FUN_02dd37b4(in_stack_00000048 + 0x60,0);
        *(undefined4 *)(in_stack_00000048 + 0x10) = 0xfffffffc;
        puVar1 = PTR_DAT_06761ff8;
        while (uVar3 = FUN_04a68d14(in_stack_00000048 + 0x60,*(undefined8 *)puVar1),
              (uVar3 & 1) != 0) {
          lVar5 = FUN_0514c0a8(*(undefined8 *)(in_stack_00000048 + 0x58),
                               *(undefined8 *)(in_stack_00000048 + 0x40),
                               *(undefined4 *)(in_stack_00000048 + 0x70));
          if (lVar5 != 0) {
            *(long *)(in_stack_00000048 + 0x18) = lVar5;
            thunk_FUN_02dd37b4((long *)(in_stack_00000048 + 0x18));
            *(undefined4 *)(in_stack_00000048 + 0x10) = 1;
            return 1;
          }
        }
        FUN_0514cb30();
        *(undefined8 *)(in_stack_00000048 + 0x60) = 0;
        *(undefined8 *)(in_stack_00000048 + 0x58) = 0;
        *(undefined8 *)(in_stack_00000048 + 0x70) = 0;
        *(undefined8 *)(in_stack_00000048 + 0x68) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000048 + 0x58),0);
        unaff_x19 = *(long **)(in_stack_00000048 + 0x50);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        param_3 = *(long *)PTR_DAT_0675f3d8;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


