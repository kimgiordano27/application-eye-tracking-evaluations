/*
FUNCTION_NAME: OVRPermissionsRequester$$remove_PermissionGranted
ENTRY_POINT: 0367b814
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

byte OVRPermissionsRequester__remove_PermissionGranted(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x24;
  byte unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s10;
  ulong uStack0000000000000010;
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
  
                    /* try { // try from 0367b814 to 0377b81b has its CatchHandler @ 0367b81c */
  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0367b7fc with catch @ 0367b81c
                       catch(type#2 @ 00000000) { ... } // from try @ 0367b814 with catch @ 0367b81c
                        */
    lVar7 = *(long *)(unaff_x20 + 0x68);
    uStack0000000000000010 = 0;
    _fStack0000000000000018 = 0;
    FUN_0367c924(&stack0x00000010,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar10 = fStack0000000000000018;
    FUN_02ba874c(uStack0000000000000010 & 0xffffffff,uStack0000000000000010._4_4_,
                 fStack0000000000000018,uStack000000000000001c,lVar7,unaff_x21,*unaff_x24);
    bVar2 = unaff_w25 & unaff_s8 < unaff_s10;
    do {
      do {
        do {
          unaff_w25 = bVar2;
          lVar7 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x26) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
                goto LAB_0367b5f4;
              }
              uVar5 = uVar5 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b5f4:
          uVar5 = (*(code *)*puVar3)();
          if ((uVar5 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) {
              return unaff_w25;
            }
            lVar7 = *unaff_x19;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 == 0) goto LAB_0367b89c;
            piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_0367b884;
          }
          lVar7 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
                goto LAB_0367b650;
              }
              uVar5 = uVar5 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b650:
          unaff_x21 = (*(code *)*puVar3)();
          plVar6 = *(long **)(unaff_x20 + 0x28);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == *unaff_x28) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
                goto LAB_0367b6b8;
              }
              uVar5 = uVar5 - 1;
              piVar4 = piVar4 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x28,0x12);
LAB_0367b6b8:
          uVar5 = (*(code *)*puVar3)(plVar6,&stack0x00000070,puVar3[1]);
          bVar2 = 0;
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
        lVar7 = *plVar6;
        uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar4 + 9) * 0x10 + 0x138);
              goto LAB_0367b730;
            }
            uVar5 = uVar5 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x28,9);
LAB_0367b730:
        uVar5 = (*(code *)*puVar3)(plVar6,uVar1,&stack0x00000050,puVar3[1]);
        bVar2 = 0;
      } while ((uVar5 & 1) == 0);
      plVar6 = *(long **)(unaff_x20 + 0x38);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar6;
      uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0367b7a4;
          }
          uVar5 = uVar5 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar6,*unaff_x29,0);
LAB_0367b7a4:
      uVar5 = (*(code *)*puVar3)(plVar6,uVar1,&stack0x00000040,puVar3[1]);
      bVar2 = 0;
    } while ((uVar5 & 1) == 0);
    in_stack_00000028 = uStack0000000000000078;
    in_stack_00000020 = in_stack_00000070;
    uStack0000000000000034 = uStack0000000000000084;
    uStack0000000000000030 = uStack0000000000000080;
    fVar9 = fStack000000000000007c;
    fVar8 = (float)FUN_0367b9f8();
    unaff_s10 = fVar10 * in_stack_00000048 +
                fVar8 * fStack0000000000000040 + fVar9 * fStack0000000000000044;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar4 = piVar4 + 4;
    if (uVar5 == 0) break;
LAB_0367b884:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0367b8b8;
    }
  }
LAB_0367b89c:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b8b8:
  (*(code *)*puVar3)();
  return unaff_w25;
}


