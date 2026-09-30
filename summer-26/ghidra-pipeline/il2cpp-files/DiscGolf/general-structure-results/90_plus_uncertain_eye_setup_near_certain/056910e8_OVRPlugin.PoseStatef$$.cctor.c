/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 056910e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PoseStatef___cctor(void)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int in_w8;
  long unaff_x19;
  undefined4 unaff_w21;
  long *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000090;
  long *in_stack_00000098;
  int in_stack_000000a0;
  
  do {
    if (in_w8 < 3) {
      if (in_w8 == 1) {
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if ((lVar8 == 0) || (unaff_x22 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(long *)(*unaff_x22 + 0x40) != *(long *)(*(long *)(unaff_x25 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(unaff_x22);
        }
        puVar5 = (undefined4 *)thunk_FUN_02dd328c(unaff_x22);
        FUN_0631a9d8(lVar8,unaff_w21,*puVar5,0);
      }
      else if (in_w8 == 2) {
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if ((lVar8 == 0) || (unaff_x22 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(long *)(*unaff_x22 + 0x40) != *(long *)(*(long *)(unaff_x25 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(unaff_x22);
        }
        puVar5 = (undefined4 *)thunk_FUN_02dd328c(unaff_x22);
        thunk_FUN_06319bc0(*puVar5,lVar8,unaff_w21,0);
      }
    }
    else if (in_w8 == 3) {
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((lVar8 == 0) || (unaff_x22 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(unaff_x22);
      }
      puVar5 = (undefined4 *)thunk_FUN_02dd328c(unaff_x22);
      thunk_FUN_06319d40(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar8,unaff_w21,0);
    }
    else if (in_w8 == 4) {
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((lVar8 == 0) || (unaff_x22 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05691084 with catch @ 056911b0
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056910b0 with catch @ 056911b4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0569108c with catch @ 056911b8
                        */
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(unaff_x22);
      }
      puVar5 = (undefined4 *)thunk_FUN_02dd328c(unaff_x22);
                    /* try { // try from 056911d0 to 057911e7 has its CatchHandler @ 056914a0 */
      thunk_FUN_06319c7c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar8,unaff_w21,0);
    }
    while( true ) {
      uVar4 = FUN_05207524(&stack0x00000080,*unaff_x26);
      plVar3 = in_stack_00000098;
      uVar2 = in_stack_00000090;
      if ((uVar4 & 1) == 0) {
        FUN_05207660(&stack0x00000080,*(undefined8 *)System_Nullable<int>_TypeInfo);
        thunk_FUN_0631c648();
        return;
      }
      unaff_x22 = in_stack_00000098;
      unaff_w21 = in_stack_00000090;
      in_w8 = in_stack_000000a0;
      if (in_stack_000000a0 < 5) break;
      if (in_stack_000000a0 < 7) {
        if (in_stack_000000a0 == 5) {
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((lVar8 == 0) || (in_stack_00000098 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(long *)(*in_stack_00000098 + 0x40) != *(long *)(*unaff_x29 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(in_stack_00000098);
          }
          puVar7 = (undefined8 *)thunk_FUN_02dd328c(in_stack_00000098);
          in_stack_00000038 = puVar7[5];
          in_stack_00000030 = puVar7[4];
          in_stack_00000048 = puVar7[7];
          in_stack_00000040 = puVar7[6];
          in_stack_00000018 = puVar7[1];
          in_stack_00000010 = *puVar7;
          in_stack_00000028 = puVar7[3];
          in_stack_00000020 = puVar7[2];
          FUN_0631aa78(lVar8,uVar2,&stack0x00000010,0);
        }
        else if (in_stack_000000a0 == 6) {
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (in_stack_00000098 == (long *)0x0) {
            lVar6 = 0;
          }
          else {
            uVar9 = *(undefined8 *)PTR_DAT_069fb928;
            lVar6 = thunk_FUN_02dd3048(in_stack_00000098,uVar9);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar3,uVar9);
            }
          }
          FUN_0631ab5c(lVar8,uVar2,lVar6,0);
        }
      }
      else if (in_stack_000000a0 == 7) {
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (in_stack_00000098 == (long *)0x0) {
          lVar6 = 0;
        }
        else {
          uVar9 = *(undefined8 *)PTR_DAT_06a0b588;
          lVar6 = thunk_FUN_02dd3048(in_stack_00000098,uVar9);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar3,uVar9);
          }
        }
        FUN_0631abb0(lVar8,uVar2,lVar6,0);
      }
      else if (in_stack_000000a0 == 8) {
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (in_stack_00000098 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)Unity_Netcode_NetworkVariable<Vector3>_TypeInfo + 0x130);
          if ((*(byte *)(*in_stack_00000098 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*in_stack_00000098 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Unity_Netcode_NetworkVariable<Vector3>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(in_stack_00000098);
          }
        }
        thunk_FUN_06319ec0(*(long *)(unaff_x19 + 0x20),in_stack_00000090,in_stack_00000098,0);
      }
    }
  } while( true );
}


