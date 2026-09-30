/*
FUNCTION_NAME: System.Action<OVRPlugin.Qpl.Annotation.Builder.Entry>$$BeginInvoke
ENTRY_POINT: 05999754
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0599a3b0) */
/* WARNING: Removing unreachable block (ram,0x0599a398) */
/* WARNING: Removing unreachable block (ram,0x05999f50) */
/* WARNING: Removing unreachable block (ram,0x05999a64) */
/* WARNING: Removing unreachable block (ram,0x0599a3c8) */
/* WARNING: Removing unreachable block (ram,0x0599a3d0) */
/* WARNING: Removing unreachable block (ram,0x0599a3b8) */
/* WARNING: Removing unreachable block (ram,0x0599a3a0) */
/* WARNING: Removing unreachable block (ram,0x05999f70) */
/* WARNING: Removing unreachable block (ram,0x059997a8) */
/* WARNING: Removing unreachable block (ram,0x05999a84) */
/* WARNING: Removing unreachable block (ram,0x0599a390) */
/* WARNING: Removing unreachable block (ram,0x059997c8) */
/* WARNING: Removing unreachable block (ram,0x05999f7c) */

void System_Action<OVRPlugin_Qpl_Annotation_Builder_Entry>__BeginInvoke(long param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char in_NG;
  char in_OV;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *unaff_x19;
  void *unaff_x20;
  int unaff_w21;
  int iVar14;
  undefined8 uVar15;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 *in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 in_stack_000000b8;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  ulong in_stack_00000150;
  int iStack0000000000000158;
  int iStack0000000000000160;
  undefined4 uStack0000000000000164;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  long in_stack_00000230;
  int in_stack_00000238;
  long in_stack_000002e8;
  
                    /* catch() { ... } // from try @ 05998d40 with catch @ 05999754
                       catch() { ... } // from try @ 059996a8 with catch @ 05999754 */
                    /* catch() { ... } // from try @ 05998d5c with catch @ 05999758
                       catch() { ... } // from try @ 059996a0 with catch @ 05999758 */
                    /* catch() { ... } // from try @ 05998b10 with catch @ 0599975c
                       catch() { ... } // from try @ 0599969c with catch @ 0599975c */
  while (in_NG != in_OV) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x150) + 0x20) + 0x135) & 1) == 0
       ) {
      FUN_03775678();
      unaff_x25 = in_stack_000002e8;
    }
    memmove(&stack0x000000b8,(void *)(in_stack_00000230 + (long)unaff_w21 * (long)unaff_w24),0x50);
    memcpy(unaff_x20,&stack0x000000b8,0x50);
    lVar7 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
    memcpy(&stack0x000001d0,unaff_x20,0x50);
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    memcpy(&stack0x00000310,&stack0x000001d0,0x50);
    uVar8 = FUN_0599b16c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar12 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x148);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20) = uVar8;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = *(long *)(in_stack_000002e8 + 0x20);
    unaff_w21 = unaff_w21 + 1;
    in_OV = SBORROW4(unaff_w21,in_stack_00000238);
    unaff_x25 = in_stack_000002e8;
    in_NG = unaff_w21 - in_stack_00000238 < 0;
  }
                    /* catch() { ... } // from try @ 059990b4 with catch @ 05999768 */
                    /* catch() { ... } // from try @ 05998a74 with catch @ 0599976c
                       catch() { ... } // from try @ 05999690 with catch @ 0599976c */
                    /* catch() { ... } // from try @ 05999280 with catch @ 05999770
                       catch() { ... } // from try @ 05999688 with catch @ 05999770 */
  *(undefined8 *)(unaff_x23 + 0x60) = 0;
  *(undefined8 *)(unaff_x23 + 0x58) = 0;
  *(undefined8 *)(unaff_x23 + 0x50) = 0;
  *(undefined8 *)(unaff_x23 + 0x48) = 0;
  *(undefined8 *)(unaff_x23 + 0x40) = 0;
  *(undefined8 *)(unaff_x23 + 0x38) = 0;
                    /* catch() { ... } // from try @ 05998a90 with catch @ 0599977c
                       catch() { ... } // from try @ 05999680 with catch @ 0599977c */
  *(undefined8 *)(unaff_x23 + 0x30) = 0;
  *(undefined8 *)(unaff_x23 + 0x28) = 0;
  *(undefined8 *)(unaff_x23 + 0x20) = 0;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
                    /* catch() { ... } // from try @ 059992cc with catch @ 05999788
                       catch() { ... } // from try @ 05999328 with catch @ 05999788
                       catch() { ... } // from try @ 05999388 with catch @ 05999788
                       catch() { ... } // from try @ 05999460 with catch @ 05999788
                       catch() { ... } // from try @ 059994c4 with catch @ 05999788
                       catch() { ... } // from try @ 059995fc with catch @ 05999788 */
  FUN_05db4990(&stack0x00000230,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x158));
                    /* try { // try from 059997a4 to 05a997a7 has its CatchHandler @ 059997ac */
                    /* try { // try from 059997b0 to 05a997b7 has its CatchHandler @ 05999aa8 */
                    /* try { // try from 059997b8 to 05a9980f has its CatchHandler @ 05998684 */
  FUN_073a3770(&stack0x00000298,0);
                    /* catch() { ... } // from try @ 05998844 with catch @ 059997bc
                       catch() { ... } // from try @ 0599967c with catch @ 059997bc */
                    /* catch() { ... } // from try @ 05999670 with catch @ 059997cc */
                    /* catch() { ... } // from try @ 05998ecc with catch @ 059997d0 */
                    /* catch() { ... } // from try @ 05998fa0 with catch @ 059997d4
                       catch() { ... } // from try @ 059991bc with catch @ 059997d4 */
  in_stack_000000b8 = 0;
                    /* catch() { ... } // from try @ 05998f1c with catch @ 059997d8 */
                    /* catch() { ... } // from try @ 05999114 with catch @ 059997dc
                       catch() { ... } // from try @ 059991e8 with catch @ 059997dc */
  FUN_073a3768(&stack0x000000b8,*(undefined8 *)PTR_DAT_07d9b0b0,0);
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar14 = *(int *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (0 < iVar14) {
    FUN_062658d0(*(undefined8 *)(lVar7 + 0x10),0,iVar14,0);
  }
  FUN_04d13e68(&stack0x000000b8,&stack0x00000220,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x110));
  memcpy(&stack0x00000230,&stack0x000000b8,0x68);
  iVar14 = unaff_w21 + 1;
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x150);
  if (iVar14 < in_stack_00000238) {
    do {
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      memmove(&stack0x000000b8,(void *)(in_stack_00000230 + (long)iVar14 * 0x50),0x50);
      memcpy(&stack0x00000248,&stack0x000000b8,0x50);
      lVar7 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
      memcpy(&stack0x00000180,&stack0x00000248,0x50);
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      memcpy(&stack0x000000b8,&stack0x00000180,0x50);
      uVar8 = FUN_0599b16c();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar10 = *(long *)(lVar7 + 0x10);
      lVar12 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x148);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (uVar3 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20) = uVar8;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4(lVar7,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar14 = iVar14 + 1;
      lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x150);
    } while (iVar14 < in_stack_00000238);
  }
  *(undefined8 *)(unaff_x23 + 0x60) = 0;
  *(undefined8 *)(unaff_x23 + 0x58) = 0;
  *(undefined8 *)(unaff_x23 + 0x50) = 0;
  *(undefined8 *)(unaff_x23 + 0x48) = 0;
  *(undefined8 *)(unaff_x23 + 0x40) = 0;
  *(undefined8 *)(unaff_x23 + 0x38) = 0;
  *(undefined8 *)(unaff_x23 + 0x30) = 0;
  *(undefined8 *)(unaff_x23 + 0x28) = 0;
  *(undefined8 *)(unaff_x23 + 0x20) = 0;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
  FUN_05db4990(&stack0x00000230,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x158));
  FUN_073a3770(&stack0x00000298,0);
  in_stack_00000090 = in_stack_00000090 & 0xffffffffffffff00;
  FUN_073a3768(&stack0x00000090,*(undefined8 *)PTR_DAT_07d9b0a8,0);
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar14 = *(int *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (0 < iVar14) {
    FUN_062658d0(*(undefined8 *)(lVar7 + 0x10),0,iVar14,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar14 = *(int *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (0 < iVar14) {
    FUN_062658d0(*(undefined8 *)(lVar7 + 0x10),0,iVar14,0);
  }
  FUN_04cd2f0c(&stack0x00000090,&stack0x00000140,*(undefined8 *)PTR_DAT_07d9ad20);
  puVar5 = PTR_DAT_07d9acf8;
  puVar4 = PTR_DAT_07d86398;
  _iStack0000000000000158 = in_stack_00000098;
  uVar8 = _iStack0000000000000158;
  in_stack_00000150 = in_stack_00000090;
  in_stack_00000168 = in_stack_000000a8;
  in_stack_00000170 = in_stack_000000b0;
  iStack0000000000000160 = (int)in_stack_000000a0;
  iStack0000000000000158 = (int)in_stack_00000098;
  iVar14 = iStack0000000000000160 + 1;
  lVar7 = *(long *)PTR_DAT_07d9acf8;
  uStack0000000000000164 = (undefined4)((ulong)in_stack_000000a0 >> 0x20);
  _iStack0000000000000160 = CONCAT44(uStack0000000000000164,iVar14);
  bVar1 = iVar14 < iStack0000000000000158;
  _iStack0000000000000158 = uVar8;
  if (bVar1) {
    do {
      uVar9 = in_stack_00000150;
      if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      puVar11 = (undefined8 *)(uVar9 + (long)iVar14 * 0x10);
      uVar8 = *puVar11;
      uVar15 = puVar11[1];
      in_stack_00000168 = uVar8;
      in_stack_00000170 = uVar15;
      if (unaff_x19[6] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar9 = FUN_05b97564(unaff_x19[6],uVar8,uVar15,&stack0x00000138,
                           *(undefined8 *)
                            (*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x180));
      uVar6 = in_stack_00000138;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = FUN_075ac5e0(uVar6,0,0);
        lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
        if ((uVar9 & 1) == 0) {
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03775678();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03775678();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x148);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar3 = *(uint *)(lVar7 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
            *puVar11 = in_stack_00000138;
            thunk_FUN_037aeb94(puVar11);
          }
          else {
            FUN_049ceef4(lVar7,in_stack_00000138,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
          lVar7 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03775678();
            lVar10 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
          FUN_047f1080(&stack0x000002f0,uVar8,uVar15,in_stack_00000138,
                       *(undefined8 *)(lVar10 + 0x198));
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          in_stack_00000060 = 0;
          lVar12 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x1a0);
          lVar10 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar3 = *(uint *)(lVar7 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            lVar10 = lVar10 + (long)(int)uVar3 * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            *(undefined8 *)(lVar10 + 0x20) = 0;
            thunk_FUN_037aeb94((undefined8 *)(lVar10 + 0x30),0);
          }
          else {
            in_stack_00000098 = 0;
            in_stack_00000090 = 0;
            in_stack_000000a0 = 0;
            FUN_04868b80(lVar7,&stack0x00000090,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03775678();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar10 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
          lVar7 = *(long *)(lVar10 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03775678();
            lVar10 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
          FUN_047f1080(&stack0x000002f0,uVar8,uVar15,0,*(undefined8 *)(lVar10 + 0x198));
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          in_stack_00000080 = 0;
          lVar12 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x1a0);
          lVar10 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar3 = *(uint *)(lVar7 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            lVar10 = lVar10 + (long)(int)uVar3 * 0x18;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            *(undefined8 *)(lVar10 + 0x20) = 0;
            thunk_FUN_037aeb94((undefined8 *)(lVar10 + 0x30),0);
          }
          else {
            in_stack_00000098 = 0;
            in_stack_00000090 = 0;
            in_stack_000000a0 = 0;
            FUN_04868b80(lVar7,&stack0x00000090,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      lVar7 = *(long *)puVar5;
      iVar14 = iStack0000000000000160 + 1;
      _iStack0000000000000160 = CONCAT44(uStack0000000000000164,iVar14);
      bVar1 = iVar14 < iStack0000000000000158;
    } while (bVar1);
  }
  in_stack_00000168 = 0;
  in_stack_00000170 = 0;
  FUN_05d80164(&stack0x00000150,*(undefined8 *)PTR_DAT_07d9acf0);
  FUN_073a3770(&stack0x00000298,0);
  FUN_054b5010(&stack0x000002a0,
               *(undefined8 *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x1a8));
  FUN_073a3770(&stack0x000002e0,0);
  in_stack_00000040 = &stack0x000002e8;
  in_stack_00000038 = 0;
  in_stack_00000048 = &stack0x00000120;
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
  }
  if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)(**(long **)(lVar7 + 0xb8) + 0x18) < 1) {
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (0 < *(int *)(lVar7 + 0x18)) goto LAB_0599a07c;
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (0 < *(int *)(lVar7 + 0x18)) {
      bVar1 = true;
      goto LAB_0599a080;
    }
LAB_0599a158:
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(lVar7 + 0x18) < 1) goto LAB_0599a2d0;
  }
  else {
LAB_0599a07c:
    bVar1 = false;
LAB_0599a080:
    lVar7 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = *(ushort *)
             (*(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_03775678();
      uVar2 = *(ushort *)
               (*(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10) + 0x135);
    }
    if ((uVar2 & 1) == 0) {
      FUN_03775678();
      uVar2 = *(ushort *)
               (*(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10) + 0x135);
    }
    if ((uVar2 & 1) == 0) {
      FUN_03775678();
    }
    (**(code **)(*unaff_x19 + 0x218))();
    if (bVar1) goto LAB_0599a158;
  }
  lVar7 = unaff_x19[5];
  if (lVar7 != 0) {
    lVar10 = *(long *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03775678();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar13 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
    lVar12 = *(long *)(lVar13 + 0x10);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar10 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_03775678();
      lVar13 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
      lVar12 = *(long *)(lVar13 + 0x10);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20);
    lVar10 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_03775678();
      lVar13 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
      lVar12 = *(long *)(lVar13 + 0x10);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x28);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_03775678();
      lVar13 = *(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0);
    }
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_059a3bc4(&stack0x00000020,uVar8,uVar15,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x30),
                 *(undefined8 *)(lVar13 + 0x1e8));
    FUN_05564734(lVar7,&stack0x000002f0,
                 *(undefined8 *)(*(long *)(*(long *)(in_stack_000002e8 + 0x20) + 0xc0) + 0x1f0));
  }
LAB_0599a2d0:
  FUN_032e5b94(&stack0x00000038);
  return;
}


