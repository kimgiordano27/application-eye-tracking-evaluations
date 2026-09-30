/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketServer$$get_AllowForwardedRequest
ENTRY_POINT: 0a444834
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


uint WebSocketSharp_Server_WebSocketServer__get_AllowForwardedRequest
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x19;
  long unaff_x20;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  float fStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined4 uStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined4 uStack00000000000001a0;
  undefined8 uStack00000000000001a4;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined4 uStack00000000000001c0;
  undefined8 uStack00000000000001c4;
  undefined1 in_stack_000001d0 [16];
  undefined4 uStack00000000000001e0;
  undefined4 uStack00000000000001e4;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  
  fVar10 = (float)FUN_0a430f38();
  fVar11 = (float)FUN_0a430f38();
  if (fVar10 == fVar11) {
    iVar3 = WebSocketSharp_Net_HttpListenerResponse__AppendHeader();
    iVar4 = WebSocketSharp_Net_HttpListenerResponse__AppendHeader();
    if (iVar3 != iVar4) goto LAB_0a444bbc;
    iVar3 = FUN_0a430e98();
    iVar4 = FUN_0a430e98();
    if (iVar3 != iVar4) goto LAB_0a444bbc;
    iVar3 = FUN_0a431028();
    iVar4 = FUN_0a431028();
    if (iVar3 != iVar4) goto LAB_0a444bbc;
    uVar5 = FUN_0a430cec();
    uVar6 = FUN_0a430cec();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431078();
    uVar6 = FUN_0a431078();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a4315c8();
    uVar6 = FUN_0a4315c8();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a43178c();
    uVar6 = FUN_0a43178c();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = WebSocketSharp_Net_HttpListenerResponse__Close();
    uVar6 = WebSocketSharp_Net_HttpListenerResponse__Close();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a4320a0();
    uVar6 = FUN_0a4320a0();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431438();
    uVar6 = FUN_0a431438();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431488();
    uVar6 = FUN_0a431488();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = WebSocketSharp_Net_HttpListenerResponse__System_IDisposable_Dispose();
    uVar6 = WebSocketSharp_Net_HttpListenerResponse__System_IDisposable_Dispose();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431528();
    uVar6 = FUN_0a431528();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431118();
    uVar6 = FUN_0a431118();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431168();
    uVar6 = FUN_0a431168();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a4311b8();
    uVar6 = FUN_0a4311b8();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431208();
    uVar6 = FUN_0a431208();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    iVar3 = FUN_0a431578();
    iVar4 = FUN_0a431578();
    if (iVar3 != iVar4) goto LAB_0a444bbc;
    iVar3 = FUN_0a430610();
    iVar4 = FUN_0a430610();
    if (iVar3 != iVar4) goto LAB_0a444bbc;
    iVar3 = FUN_0a430660();
    iVar4 = FUN_0a430660();
    if (iVar3 != iVar4) goto LAB_0a444bbc;
    iVar3 = FUN_0a4306b0();
    iVar4 = FUN_0a4306b0();
    if (iVar3 != iVar4) goto LAB_0a444bbc;
    uVar5 = FUN_0a430e48();
    uVar6 = FUN_0a430e48();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a431258();
    uVar6 = FUN_0a431258();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a4312a8();
    uVar6 = FUN_0a4312a8();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) goto LAB_0a444bbc;
    uVar5 = FUN_0a4312f8();
    uVar6 = FUN_0a4312f8();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    uVar8 = 0x28;
    if ((uVar7 & 1) == 0) {
      uVar5 = FUN_0a431348();
      uVar6 = FUN_0a431348();
      uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = 0x20;
      }
    }
  }
  else {
LAB_0a444bbc:
    uVar8 = 0x28;
  }
  fVar10 = (float)FUN_0a430a10();
  fVar11 = (float)FUN_0a430a10();
  if (fVar10 == fVar11) {
    fVar10 = (float)FUN_0a430ab4();
    fVar11 = (float)FUN_0a430ab4();
    if (fVar10 != fVar11) goto LAB_0a444c40;
    fVar10 = (float)FUN_0a430b58();
    fVar11 = (float)FUN_0a430b58();
    uVar9 = 0x928;
    if (fVar10 == fVar11) {
      fVar10 = (float)FUN_0a430c9c();
      fVar11 = (float)FUN_0a430c9c();
      uVar9 = uVar8;
      if (fVar10 != fVar11) {
        uVar9 = 0x928;
      }
    }
  }
  else {
LAB_0a444c40:
    uVar9 = 0x928;
  }
  puVar1 = PTR_DAT_0acf1e60;
  uVar7 = FUN_07647f28();
  if ((uVar7 & 1) == 0) {
    fVar12 = (float)FUN_0a430d3c();
    fVar11 = param_4;
    fVar15 = param_2;
    fVar14 = param_3;
    fVar13 = (float)FUN_0a430d3c();
    fVar10 = DAT_01df45a8;
    fVar15 = param_2 - fVar15;
    param_3 = param_3 - fVar14;
    param_4 = param_4 - fVar11;
    param_2 = param_4 * param_4;
    uVar8 = uVar9 | 0x2000;
    if (param_2 + param_3 * param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15 * fVar15 <
        DAT_01df45a8) {
      uVar8 = uVar9;
    }
    if ((uVar8 & 0x8080808) == 0) {
      uVar5 = WebSocketSharp_Net_HttpListenerResponse_<findCookie>d__62__System_Collections_IEnumerable_GetEnumerator
                        ();
      uVar6 = WebSocketSharp_Net_HttpListenerResponse_<findCookie>d__62__System_Collections_IEnumerable_GetEnumerator
                        ();
      if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac09788);
      }
      uVar7 = FUN_0a17b398(uVar5,uVar6,0);
      if ((uVar7 & 1) == 0) {
        iVar3 = FUN_0a431ebc();
        iVar4 = FUN_0a431ebc();
        if (iVar3 == iVar4) {
          uVar5 = FUN_0a42d4d8();
          uVar6 = FUN_0a42d4d8();
          uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
          if ((uVar7 & 1) == 0) {
            auVar16 = FUN_0a431ae0();
            auVar17 = FUN_0a431ae0();
            uVar7 = FUN_0a2ab1dc(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
            if ((uVar7 & 1) == 0) {
              iVar3 = FUN_0a432050();
              iVar4 = FUN_0a432050();
              if (iVar3 == iVar4) {
                iVar3 = FUN_0a431b34();
                iVar4 = FUN_0a431b34();
                if (iVar3 == iVar4) {
                  fVar11 = (float)FUN_0a431f60();
                  fVar15 = (float)FUN_0a431f60();
                  if (fVar11 == fVar15) {
                    uVar5 = FUN_0a4310c8();
                    uVar6 = FUN_0a4310c8();
                    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
                    if ((uVar7 & 1) == 0) {
                      uVar5 = FUN_0a4320f0();
                      uVar6 = FUN_0a4320f0();
                      uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
                      if ((uVar7 & 1) == 0) {
                        iVar3 = FUN_0a431a40();
                        iVar4 = FUN_0a431a40();
                        if (iVar3 == iVar4) {
                          uVar5 = FUN_0a431bd4();
                          uVar6 = FUN_0a431bd4();
                          uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
                          if ((uVar7 & 1) == 0) goto LAB_0a444e80;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x808;
    }
LAB_0a444e80:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_0a431724(&stack0x000000b0);
      FUN_0a431724(&stack0x000001d0 + 4);
      uStack00000000000001c4 = CONCAT44(uStack00000000000000c8,uStack00000000000000c4);
      in_stack_000001b8 = uStack00000000000000b8;
      in_stack_000001b0 = in_stack_000000b0;
      uStack00000000000001a4 = CONCAT44(uStack00000000000001ec,uStack00000000000001e8);
      uStack00000000000001c0 = uStack00000000000000c0;
      uStack0000000000000198 = in_stack_000001d0._12_4_;
      in_stack_00000190 = in_stack_000001d0._4_8_;
      uStack000000000000019c = uStack00000000000001e0;
      uStack00000000000001a0 = uStack00000000000001e4;
      uVar5 = in_stack_000001d0._4_8_;
      param_2 = fStack00000000000000bc;
      uVar7 = FUN_0a30cb18(&stack0x000001b0,&stack0x00000190,0);
      param_3 = (float)uVar5;
      if ((uVar7 & 1) == 0) {
        iVar3 = FUN_0a431e04();
        iVar4 = FUN_0a431e04();
        if (iVar3 == iVar4) {
          fVar12 = (float)FUN_0a431f0c();
          fVar11 = param_4;
          fVar15 = param_2;
          fVar14 = param_3;
          fVar13 = (float)FUN_0a431f0c();
          fVar15 = param_2 - fVar15;
          param_3 = param_3 - fVar14;
          param_4 = param_4 - fVar11;
          param_2 = param_4 * param_4;
          if (param_2 + param_3 * param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15 * fVar15
              < fVar10) goto LAB_0a444f44;
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_0a444f44:
    iVar3 = FUN_0a432000();
    iVar4 = FUN_0a432000();
    uVar9 = uVar8;
    if (iVar3 != iVar4) {
      uVar9 = uVar8 | 0x100800;
    }
  }
  puVar2 = PTR_DAT_0acf1e58;
  uVar7 = FUN_07648e1c(unaff_x20 + 0x18,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)puVar1);
  uVar8 = uVar9;
  if ((uVar7 & 1) == 0) {
    auVar16 = FUN_0a431680();
    auVar17 = FUN_0a431680();
    uVar7 = FUN_0a2e714c(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    if ((uVar7 & 1) == 0) {
      FUN_0a431618(&stack0x000000b0);
      FUN_0a431618(&stack0x000001d0 + 4);
      in_stack_00000178 = CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
      in_stack_00000180 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000158 = CONCAT44(uStack00000000000001e0,in_stack_000001d0._12_4_);
      in_stack_00000160 = CONCAT44(uStack00000000000001e8,uStack00000000000001e4);
      in_stack_00000170 = in_stack_000000b0;
      in_stack_00000150 = in_stack_000001d0._4_8_;
      uVar5 = in_stack_000001d0._4_8_;
      uVar7 = FUN_0a2e6cc0(&stack0x00000170,&stack0x00000150,0);
      param_2 = (float)uVar5;
      if ((uVar7 & 1) == 0) {
        FUN_0a431984(&stack0x000000b0);
        FUN_0a431984(&stack0x000001d0 + 4);
        in_stack_00000138 = CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
        in_stack_00000140 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
        in_stack_00000118 = CONCAT44(uStack00000000000001e0,in_stack_000001d0._12_4_);
        in_stack_00000120 = CONCAT44(uStack00000000000001e8,uStack00000000000001e4);
        in_stack_00000130 = in_stack_000000b0;
        in_stack_00000110 = in_stack_000001d0._4_8_;
        uVar5 = in_stack_000001d0._4_8_;
        uVar7 = FUN_0a2eb3dc(&stack0x00000130,&stack0x00000110,0);
        param_2 = (float)uVar5;
        if ((uVar7 & 1) == 0) {
          FUN_0a4317dc(&stack0x000000b0);
          FUN_0a4317dc(&stack0x000001d0 + 4);
          in_stack_000000f8 = CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
          in_stack_000000d8 = CONCAT44(uStack00000000000001e0,in_stack_000001d0._12_4_);
          in_stack_000000f0 = in_stack_000000b0;
          in_stack_00000100 = uStack00000000000000c0;
          in_stack_000000d0 = in_stack_000001d0._4_8_;
          in_stack_000000e0 = uStack00000000000001e4;
          uVar7 = FUN_0a2ead40(&stack0x000000f0,&stack0x000000d0,0);
          param_2 = (float)in_stack_000001d0._4_8_;
          uVar8 = uVar9 | 0x200;
          if ((uVar7 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_0a445060;
        }
      }
    }
    uVar8 = uVar9 | 0x200;
  }
LAB_0a445060:
  puVar1 = PTR_DAT_0acf1e48;
  uVar7 = FUN_07649304(unaff_x20 + 0x20,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0ace6420 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar7 = FUN_0a2a8e94();
    if ((uVar7 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = PTR_DAT_0acf1e68;
  uVar7 = FUN_07649800(unaff_x20 + 0x28,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)puVar1);
  if ((uVar7 & 1) == 0) {
    if ((uVar8 >> 0xd & 1) == 0) {
      fVar12 = (float)FUN_0a430700();
      fVar11 = param_4;
      fVar15 = param_2;
      fVar14 = param_3;
      fVar13 = (float)FUN_0a430700();
      fVar10 = DAT_01df45a8;
      fVar15 = param_2 - fVar15;
      param_3 = param_3 - fVar14;
      param_4 = param_4 - fVar11;
      param_2 = param_4 * param_4;
      if (param_2 + param_3 * param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15 * fVar15 <
          DAT_01df45a8) {
        fVar12 = (float)FUN_0a43091c();
        fVar11 = param_4;
        fVar15 = param_2;
        fVar14 = param_3;
        fVar13 = (float)FUN_0a43091c();
        fVar15 = param_2 - fVar15;
        param_3 = param_3 - fVar14;
        param_4 = param_4 - fVar11;
        param_2 = param_4 * param_4;
        if (param_2 + param_3 * param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15 * fVar15 <
            fVar10) {
          fVar12 = (float)FUN_0a430a60();
          fVar11 = param_4;
          fVar15 = param_2;
          fVar14 = param_3;
          fVar13 = (float)FUN_0a430a60();
          fVar15 = param_2 - fVar15;
          param_3 = param_3 - fVar14;
          param_4 = param_4 - fVar11;
          param_2 = param_4 * param_4;
          if (param_2 + param_3 * param_3 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15 * fVar15
              < fVar10) {
            fVar12 = (float)FUN_0a430b04();
            fVar11 = param_4;
            fVar15 = param_2;
            fVar14 = param_3;
            fVar13 = (float)FUN_0a430b04();
            fVar15 = param_2 - fVar15;
            param_3 = param_3 - fVar14;
            param_4 = param_4 - fVar11;
            param_2 = param_4 * param_4;
            if (param_2 + param_3 * param_3 +
                          (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15 * fVar15 < fVar10) {
              fVar12 = (float)FUN_0a430ba8();
              fVar11 = param_4;
              fVar15 = param_2;
              fVar14 = param_3;
              fVar13 = (float)FUN_0a430ba8();
              fVar15 = param_2 - fVar15;
              param_3 = param_3 - fVar14;
              param_4 = param_4 - fVar11;
              param_2 = param_4 * param_4;
              if (param_2 + param_3 * param_3 +
                            (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15 * fVar15 < fVar10)
              goto LAB_0a44527c;
            }
          }
        }
      }
      uVar8 = uVar8 | 0x2000;
    }
LAB_0a44527c:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_0a430754(&stack0x000000b0);
      FUN_0a430754(&stack0x00000070);
      in_stack_00000098 = CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
      in_stack_000000a8 = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
      uVar5 = CONCAT44(uStack00000000000000c4,uStack00000000000000c0);
      in_stack_00000090 = in_stack_000000b0;
      in_stack_000000a0 = uVar5;
      uVar7 = FUN_0a2a7c08(&stack0x00000090,&stack0x00000070,0);
      param_2 = (float)uVar5;
      if ((uVar7 & 1) == 0) {
        auVar16 = FUN_0a4307b4();
        auVar17 = FUN_0a4307b4();
        uVar7 = FUN_0a277c98(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                             auVar17._8_8_ & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          auVar16 = FUN_0a43080c();
          auVar17 = FUN_0a43080c();
          uVar7 = FUN_0a277c98(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                               auVar17._8_8_ & 0xffffffff,0);
          if ((uVar7 & 1) == 0) {
            uVar5 = FUN_0a430864();
            uVar6 = FUN_0a430864();
            uVar7 = FUN_0a2785ac(uVar5,uVar6,0);
            if ((uVar7 & 1) == 0) {
              FUN_0a4308b4(&stack0x000000b0);
              FUN_0a4308b4(&stack0x0000003c);
              in_stack_00000058 = CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
              in_stack_00000050 = in_stack_000000b0;
              in_stack_00000060 = uStack00000000000000c0;
              uVar7 = FUN_0a278a94(&stack0x00000050,&stack0x0000003c,0);
              if ((uVar7 & 1) == 0) goto LAB_0a44538c;
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_0a44538c:
    uVar5 = FUN_0a430970();
    uVar6 = FUN_0a430970();
    uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
    if ((uVar7 & 1) == 0) {
      uVar5 = FUN_0a4309c0();
      uVar6 = FUN_0a4309c0();
      uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_0a445404;
      uVar5 = FUN_0a430bfc();
      uVar6 = FUN_0a430bfc();
      uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
      if ((uVar7 & 1) != 0) goto LAB_0a445404;
      uVar5 = FUN_0a430c4c();
      uVar6 = FUN_0a430c4c();
      uVar7 = FUN_0a2e6620(uVar5,uVar6,0);
      uVar9 = uVar8 | 0x880;
      if ((uVar7 & 1) == 0) {
        uVar9 = uVar8;
      }
    }
    else {
LAB_0a445404:
      uVar9 = uVar8 | 0x880;
    }
    fVar10 = (float)FUN_0a431398();
    fVar11 = (float)FUN_0a431398();
    uVar8 = uVar9 | 0x1000;
    if (fVar10 == fVar11) {
      uVar8 = uVar9;
    }
    iVar3 = FUN_0a4313e8();
    iVar4 = FUN_0a4313e8();
    if (iVar3 != iVar4) {
      uVar8 = uVar8 | 0x48;
    }
  }
  uVar7 = FUN_07648920(unaff_x20 + 0x10,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)puVar2);
  if ((uVar7 & 1) != 0) {
    return uVar8;
  }
  if ((uVar8 & 0x808) == 0) {
    iVar3 = FUN_0a431db4();
    iVar4 = FUN_0a431db4();
    if (iVar3 == iVar4) {
      iVar3 = FUN_0a4316d4();
      iVar4 = FUN_0a4316d4();
      if (iVar3 == iVar4) {
        fVar10 = (float)FUN_0a431d14();
        fVar11 = (float)FUN_0a431d14();
        if (fVar10 == fVar11) {
          FUN_0a431e54(&stack0x000000b0);
          FUN_0a431e54(&stack0x0000000c);
          in_stack_00000028 = CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
          in_stack_00000020 = in_stack_000000b0;
          in_stack_00000030 = uStack00000000000000c0;
          uVar7 = FUN_0a30c054(&stack0x00000020,&stack0x0000000c,0);
          if ((uVar7 & 1) == 0) goto LAB_0a445508;
        }
      }
    }
    uVar8 = uVar8 | 0x808;
  }
LAB_0a445508:
  fVar14 = (float)FUN_0a4319ec();
  fVar10 = param_4;
  fVar11 = param_2;
  fVar15 = param_3;
  fVar12 = (float)FUN_0a4319ec();
  uVar9 = uVar8 | 0x2000;
  if ((param_4 - fVar10) * (param_4 - fVar10) +
      (param_3 - fVar15) * (param_3 - fVar15) +
      (fVar14 - fVar12) * (fVar14 - fVar12) + (param_2 - fVar11) * (param_2 - fVar11) < DAT_01df45a8
     ) {
    uVar9 = uVar8;
  }
  if ((uVar9 >> 0xb & 1) == 0) {
    iVar3 = FUN_0a431b84();
    iVar4 = FUN_0a431b84();
    if (iVar3 == iVar4) {
      iVar3 = FUN_0a431c24();
      iVar4 = FUN_0a431c24();
      if (iVar3 == iVar4) {
        iVar3 = FUN_0a431c74();
        iVar4 = FUN_0a431c74();
        if (iVar3 == iVar4) {
          iVar3 = FUN_0a431cc4();
          iVar4 = FUN_0a431cc4();
          if (iVar3 == iVar4) {
            iVar3 = FUN_0a431d64();
            iVar4 = FUN_0a431d64();
            if (iVar3 == iVar4) {
              iVar3 = FUN_0a431fb0();
              iVar4 = FUN_0a431fb0();
              if (iVar3 == iVar4) {
                return uVar9;
              }
            }
          }
        }
      }
    }
    uVar9 = uVar9 | 0x800;
  }
  return uVar9;
}


