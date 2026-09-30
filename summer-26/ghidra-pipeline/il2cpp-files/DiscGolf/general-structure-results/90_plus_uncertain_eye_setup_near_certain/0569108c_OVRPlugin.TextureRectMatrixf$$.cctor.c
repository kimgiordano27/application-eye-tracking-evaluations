/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 0569108c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_TextureRectMatrixf___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 *unaff_x22;
  long lVar9;
  undefined8 uVar10;
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
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  long *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  long *in_stack_00000098;
  int iStack00000000000000a0;
  undefined8 in_stack_000000a8;
  
                    /* try { // try from 0569108c to 057910af has its CatchHandler @ 056911b8 */
  FUN_0522aa4c();
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04d69e08(&stack0x00000050,*(long *)(unaff_x19 + 0x10),*unaff_x22);
  puVar2 = PTR_DAT_069fb9c0;
                    /* try { // try from 056910b0 to 057910c3 has its CatchHandler @ 056911b4 */
  in_stack_00000088 = in_stack_00000058;
  in_stack_00000080 = in_stack_00000050;
  in_stack_00000098 = in_stack_00000068;
  in_stack_00000090 = in_stack_00000060;
  in_stack_000000a8 = in_stack_00000078;
  _iStack00000000000000a0 = in_stack_00000070;
  in_stack_00000050 = 0;
  in_stack_00000058 = &stack0x00000080;
  while( true ) {
    do {
      while( true ) {
        while( true ) {
          while( true ) {
                    /* try { // try from 056910c4 to 057911cf has its CatchHandler @ 05690d40 */
            uVar5 = FUN_05207524(&stack0x00000080,*unaff_x26);
            plVar4 = in_stack_00000098;
            uVar3 = in_stack_00000090;
            if ((uVar5 & 1) == 0) {
              FUN_05207660(&stack0x00000080,*(undefined8 *)System_Nullable<int>_TypeInfo);
              thunk_FUN_0631c648();
              return;
            }
            if (iStack00000000000000a0 < 5) break;
            if (iStack00000000000000a0 < 7) {
              if (iStack00000000000000a0 == 5) {
                lVar9 = *(long *)(unaff_x19 + 0x20);
                if ((lVar9 == 0) || (in_stack_00000098 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(long *)(*in_stack_00000098 + 0x40) != *(long *)(*unaff_x29 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(in_stack_00000098);
                }
                puVar8 = (undefined8 *)thunk_FUN_02dd328c(in_stack_00000098);
                in_stack_00000038 = puVar8[5];
                in_stack_00000030 = puVar8[4];
                in_stack_00000048 = puVar8[7];
                in_stack_00000040 = puVar8[6];
                in_stack_00000018 = puVar8[1];
                in_stack_00000010 = *puVar8;
                in_stack_00000028 = puVar8[3];
                in_stack_00000020 = puVar8[2];
                FUN_0631aa78(lVar9,uVar3 & 0xffffffff,&stack0x00000010,0);
              }
              else if (iStack00000000000000a0 == 6) {
                lVar9 = *(long *)(unaff_x19 + 0x20);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (in_stack_00000098 == (long *)0x0) {
                  lVar7 = 0;
                }
                else {
                  uVar10 = *(undefined8 *)PTR_DAT_069fb928;
                  lVar7 = thunk_FUN_02dd3048(in_stack_00000098,uVar10);
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96be0(plVar4,uVar10);
                  }
                }
                FUN_0631ab5c(lVar9,uVar3 & 0xffffffff,lVar7,0);
              }
            }
            else if (iStack00000000000000a0 == 7) {
              lVar9 = *(long *)(unaff_x19 + 0x20);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (in_stack_00000098 == (long *)0x0) {
                lVar7 = 0;
              }
              else {
                uVar10 = *(undefined8 *)PTR_DAT_06a0b588;
                lVar7 = thunk_FUN_02dd3048(in_stack_00000098,uVar10);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(plVar4,uVar10);
                }
              }
              FUN_0631abb0(lVar9,uVar3 & 0xffffffff,lVar7,0);
            }
            else if (iStack00000000000000a0 == 8) {
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
              thunk_FUN_06319ec0(*(long *)(unaff_x19 + 0x20),in_stack_00000090 & 0xffffffff,
                                 in_stack_00000098,0);
            }
          }
          if (iStack00000000000000a0 < 3) break;
          if (iStack00000000000000a0 == 3) {
            lVar9 = *(long *)(unaff_x19 + 0x20);
            if ((lVar9 == 0) || (in_stack_00000098 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(*in_stack_00000098 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(in_stack_00000098);
            }
            puVar6 = (undefined4 *)thunk_FUN_02dd328c(in_stack_00000098);
            thunk_FUN_06319d40(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar9,uVar3 & 0xffffffff,0);
          }
          else if (iStack00000000000000a0 == 4) {
            lVar9 = *(long *)(unaff_x19 + 0x20);
            if ((lVar9 == 0) || (in_stack_00000098 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(*in_stack_00000098 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(in_stack_00000098);
            }
            puVar6 = (undefined4 *)thunk_FUN_02dd328c(in_stack_00000098);
            thunk_FUN_06319c7c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar9,uVar3 & 0xffffffff,0);
          }
        }
        if (iStack00000000000000a0 != 1) break;
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if ((lVar9 == 0) || (in_stack_00000098 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(long *)(*in_stack_00000098 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(in_stack_00000098);
        }
        puVar6 = (undefined4 *)thunk_FUN_02dd328c(in_stack_00000098);
        FUN_0631a9d8(lVar9,uVar3 & 0xffffffff,*puVar6,0);
      }
    } while (iStack00000000000000a0 != 2);
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((lVar9 == 0) || (in_stack_00000098 == (long *)0x0)) break;
    if (*(long *)(*in_stack_00000098 + 0x40) != *(long *)(*(long *)(puVar2 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(in_stack_00000098);
    }
    puVar6 = (undefined4 *)thunk_FUN_02dd328c(in_stack_00000098);
    thunk_FUN_06319bc0(*puVar6,lVar9,uVar3 & 0xffffffff,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


