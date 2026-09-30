/*
FUNCTION_NAME: Unity.Mathematics.math$$log10
ENTRY_POINT: 02126860
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_Mathematics_math__log10(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long unaff_x19;
  undefined4 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar7;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar8;
  float unaff_s9;
  float fVar9;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  long *in_stack_000000f8;
  ulong in_stack_00000128;
  float fStack0000000000000138;
  float fStack000000000000013c;
  
  do {
    uVar5 = FUN_02146034(param_1,param_2,param_3,0);
    if ((uVar5 & 1) == 0) {
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar8 = (float)(**(code **)(*unaff_x25 + 0x198))
                               (unaff_x25,unaff_x26,*(undefined8 *)(*unaff_x25 + 0x1a0));
      if (0.0 <= fVar8) {
        if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar5 = FUN_0129eff4(*(long *)(unaff_x19 + 0x170),unaff_x25,&stack0x00000138,
                             *(undefined8 *)PTR_DAT_033eb750);
        if ((uVar5 & 1) == 0) {
          fStack0000000000000138 = (float)thunk_FUN_02144284(unaff_x25,0);
          if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          _fStack0000000000000018 = CONCAT44(uStack000000000000001c,fStack0000000000000138);
          FUN_0129a054(*(long *)(unaff_x19 + 0x170),unaff_x25,&stack0x00000018,
                       *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
        }
        unaff_x29 = 1;
        if (ABS(fStack0000000000000138 - fVar8) < *(float *)(unaff_x19 + 200)) goto LAB_02126708;
      }
      lVar4 = *(long *)(unaff_x19 + 0x138);
      if (lVar4 == 0) {
        uVar5 = FUN_02144170(unaff_x25,0);
        fVar9 = fVar8;
        if ((uVar5 & 1) == 0) {
          fVar9 = fVar8 + unaff_s9;
        }
      }
      else {
        _fStack0000000000000018 = in_stack_00000128;
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),unaff_x25,&stack0x00000018,
                   (long)&stack0x00000138 + 4,*(undefined8 *)(lVar4 + 0x28));
        fVar9 = fStack000000000000013c;
      }
      puVar1 = StringLiteral_12008;
      uVar2 = FUN_012f8c34();
      if (uVar2 == 0xffffffff) {
        uStack0000000000000088 = *unaff_x22;
        uStack000000000000008c = uStack0000000000000088;
        FUN_012f81e4();
        fStack0000000000000018 = fVar9;
        FUN_010b20b8();
        _fStack0000000000000018 = CONCAT44(uStack000000000000001c,fVar8);
        FUN_010b20b8(in_stack_00000010,&stack0x00000088,&stack0x00000018,10,*(undefined8 *)puVar1);
        unaff_x29 = 1;
        unaff_x28 = 1;
        if (0.0 < *(float *)(unaff_x19 + 0xf4)) {
          uVar7 = FUN_021d11ec(0);
LAB_02126aa8:
          *(undefined8 *)(unaff_x19 + 0xe0) = uVar7;
          unaff_x29 = 1;
          unaff_x28 = 1;
        }
      }
      else {
        lVar4 = *unaff_x23;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        pfVar6 = (float *)(lVar4 + (long)(int)uVar2 * 4 + 0x20);
        unaff_x29 = 1;
        if (*pfVar6 < fVar9) {
          *pfVar6 = fVar9;
          unaff_x29 = 1;
          unaff_x28 = 1;
          if (0.0 < *(float *)(unaff_x19 + 0xf4)) {
            uVar7 = FUN_021d11ec(0);
            goto LAB_02126aa8;
          }
        }
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = FUN_0129aa60(*(long *)(unaff_x19 + 0x170),unaff_x25,
                           *(undefined8 *)Method_Obi_ObiNativeList<Quaternion>_ResizeInitialized__);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        _fStack0000000000000018 = _fStack0000000000000018 & 0xffffffff00000000;
        FUN_0129a054(*(long *)(unaff_x19 + 0x170),unaff_x25,&stack0x00000018,
                     *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
      }
      if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      _fStack0000000000000018 = _fStack0000000000000018 & 0xffffffff00000000;
      FUN_01299e64(*(long *)(unaff_x19 + 0x170),unaff_x25,&stack0x00000018,
                   *(undefined8 *)
                    Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__);
    }
LAB_02126708:
    do {
      do {
        uVar5 = Unity_Mathematics_bool4__get_zxyx(&stack0x000000b0,0);
        param_1 = in_stack_000000f8;
        if ((uVar5 & 1) == 0) {
LAB_02126ac0:
          FUN_02148220(&stack0x000000b0,0);
          if (((unaff_x29 & 1) != 0) && ((*(byte *)(unaff_x19 + 0x169) >> 1 & 1) != 0)) {
            FUN_021d080c(&stack0x00000128,1,0);
          }
          if (((unaff_x28 & 1) != 0) && ((*(byte *)(unaff_x19 + 0x168) >> 2 & 1) == 0)) {
            if (*(long *)(unaff_x19 + 0x128) == 0) {
              if (*(float *)(unaff_x19 + 0xf4) <= 0.0) {
                FUN_02125bc0();
              }
              else {
                FUN_021260a4();
              }
            }
            else {
              FUN_021260a4();
              lVar4 = *(long *)(unaff_x19 + 0x128);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
            }
          }
          return;
        }
        param_2 = FUN_021466f4(in_stack_000000f8,in_stack_00000128);
        uVar5 = FUN_015ff8a0(*(undefined8 *)(unaff_x19 + 0xc0),0);
        if ((((uVar5 & 1) == 0) &&
            (uVar5 = FUN_02149214(*(undefined8 *)(unaff_x19 + 0xc0),param_1,0), (uVar5 & 1) != 0))
           && (uVar5 = FUN_02146560(param_1,param_2,0), (uVar5 & 1) != 0)) {
          FUN_02125b74();
          goto LAB_02126ac0;
        }
      } while (((0 < *(int *)(unaff_x19 + 0xa0)) &&
               (uVar5 = FUN_02126cac(param_1,*(undefined8 *)(unaff_x19 + 0xa8)), (uVar5 & 1) != 0))
              || ((0 < *(int *)(unaff_x19 + 0x90) &&
                  (uVar5 = FUN_02126cac(param_1,*(undefined8 *)(unaff_x19 + 0x98)), (uVar5 & 1) == 0
                  ))));
      uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_0178a8c4(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        plVar3 = *(long **)(unaff_x19 + 0x78);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar5 = (**(code **)(*plVar3 + 0x8b8))(plVar3,param_1,*(undefined8 *)(*plVar3 + 0x8c0));
        if ((uVar5 & 1) == 0) goto LAB_02126708;
      }
      uVar5 = FUN_021fe5e8();
      if ((uVar5 & 1) != 0) break;
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = FUN_021f5d74(*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),
                           param_1[0xb],param_1[0xc],0);
      if ((uVar5 & 1) == 0) break;
      lVar4 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
      ;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
        ;
      }
      uVar5 = FUN_021ef194(*(long *)(lVar4 + 0xb8) + 0x10,*(undefined8 *)(unaff_x19 + 0x80),
                           *(undefined8 *)(unaff_x19 + 0x88),param_1[0xb],param_1[0xc],0);
    } while ((uVar5 & 1) == 0);
    param_3 = 0;
    unaff_x25 = param_1;
    unaff_x26 = param_2;
  } while( true );
}


