/*
FUNCTION_NAME: Unity.Mathematics.math$$log2
ENTRY_POINT: 021266b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


void Unity_Mathematics_math__log2(void)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  long unaff_x19;
  long *unaff_x24;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long *in_stack_000000f8;
  ulong in_stack_00000128;
  float fStack0000000000000138;
  float fStack000000000000013c;
  
  Unity_Mathematics_bool4__get_ywxz();
  in_stack_000000a0 = in_stack_00000028;
  in_stack_00000098 = in_stack_00000020;
  in_stack_00000090 = _fStack0000000000000018;
  FUN_0214730c(&stack0x00000018,&stack0x00000090,0);
  memcpy(&stack0x000000b0,&stack0x00000018,0x70);
  bVar2 = false;
  bVar3 = false;
  puVar1 = (undefined4 *)(unaff_x19 + 0xf8);
LAB_02126708:
  do {
    uVar7 = Unity_Mathematics_bool4__get_zxyx(&stack0x000000b0,0);
    plVar5 = in_stack_000000f8;
    if ((uVar7 & 1) == 0) {
LAB_02126ac0:
      FUN_02148220(&stack0x000000b0,0);
      if ((bVar2) && ((*(byte *)(unaff_x19 + 0x169) >> 1 & 1) != 0)) {
        FUN_021d080c(&stack0x00000128,1,0);
      }
      if ((bVar3) && ((*(byte *)(unaff_x19 + 0x168) >> 2 & 1) == 0)) {
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
          lVar10 = *(long *)(unaff_x19 + 0x128);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40));
        }
      }
      return;
    }
    uVar8 = FUN_021466f4(in_stack_000000f8,in_stack_00000128);
    uVar7 = FUN_015ff8a0(*(undefined8 *)(unaff_x19 + 0xc0),0);
    if ((((uVar7 & 1) == 0) &&
        (uVar7 = FUN_02149214(*(undefined8 *)(unaff_x19 + 0xc0),plVar5,0), (uVar7 & 1) != 0)) &&
       (uVar7 = FUN_02146560(plVar5,uVar8,0), (uVar7 & 1) != 0)) {
      FUN_02125b74();
      goto LAB_02126ac0;
    }
  } while (((0 < *(int *)(unaff_x19 + 0xa0)) &&
           (uVar7 = FUN_02126cac(plVar5,*(undefined8 *)(unaff_x19 + 0xa8)), (uVar7 & 1) != 0)) ||
          ((0 < *(int *)(unaff_x19 + 0x90) &&
           (uVar7 = FUN_02126cac(plVar5,*(undefined8 *)(unaff_x19 + 0x98)), (uVar7 & 1) == 0))));
  uVar12 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0178a8c4(uVar12,0,0);
  if ((uVar7 & 1) != 0) {
    plVar9 = *(long **)(unaff_x19 + 0x78);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = (**(code **)(*plVar9 + 0x8b8))(plVar9,plVar5,*(undefined8 *)(*plVar9 + 0x8c0));
    if ((uVar7 & 1) == 0) goto LAB_02126708;
  }
  uVar7 = FUN_021fe5e8(unaff_x19 + 0x80,0);
  if ((uVar7 & 1) == 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_021f5d74(*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),
                         plVar5[0xb],plVar5[0xc],0);
    if ((uVar7 & 1) != 0) {
      lVar10 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
      ;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
        ;
      }
      uVar7 = FUN_021ef194(*(long *)(lVar10 + 0xb8) + 0x10,*(undefined8 *)(unaff_x19 + 0x80),
                           *(undefined8 *)(unaff_x19 + 0x88),plVar5[0xb],plVar5[0xc],0);
      if ((uVar7 & 1) == 0) goto LAB_02126708;
    }
  }
  uVar7 = FUN_02146034(plVar5,uVar8,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_0129aa60(*(long *)(unaff_x19 + 0x170),plVar5,
                         *(undefined8 *)Method_Obi_ObiNativeList<Quaternion>_ResizeInitialized__);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      _fStack0000000000000018 = _fStack0000000000000018 & 0xffffffff00000000;
      FUN_0129a054(*(long *)(unaff_x19 + 0x170),plVar5,&stack0x00000018,
                   *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
    }
    if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    _fStack0000000000000018 = _fStack0000000000000018 & 0xffffffff00000000;
    FUN_01299e64(*(long *)(unaff_x19 + 0x170),plVar5,&stack0x00000018,
                 *(undefined8 *)
                  Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__);
    goto LAB_02126708;
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  fVar13 = (float)(**(code **)(*plVar5 + 0x198))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x1a0));
  if (0.0 <= fVar13) {
    if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_0129eff4(*(long *)(unaff_x19 + 0x170),plVar5,&stack0x00000138,
                         *(undefined8 *)PTR_DAT_033eb750);
    if ((uVar7 & 1) == 0) {
      fStack0000000000000138 = (float)thunk_FUN_02144284(plVar5,0);
      if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      _fStack0000000000000018 = CONCAT44(uStack000000000000001c,fStack0000000000000138);
      FUN_0129a054(*(long *)(unaff_x19 + 0x170),plVar5,&stack0x00000018,
                   *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
    }
    bVar2 = true;
    if (ABS(fStack0000000000000138 - fVar13) < *(float *)(unaff_x19 + 200)) goto LAB_02126708;
  }
  lVar10 = *(long *)(unaff_x19 + 0x138);
  if (lVar10 == 0) {
    uVar7 = FUN_02144170(plVar5,0);
    fVar14 = fVar13;
    if ((uVar7 & 1) == 0) {
      fVar14 = fVar13 + 1.0;
    }
  }
  else {
    _fStack0000000000000018 = in_stack_00000128;
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),plVar5,&stack0x00000018,(long)&stack0x00000138 + 4,
               *(undefined8 *)(lVar10 + 0x28));
    fVar14 = fStack000000000000013c;
  }
  puVar4 = StringLiteral_12008;
  uVar6 = FUN_012f8c34(puVar1,plVar5,*(undefined8 *)StringLiteral_441);
  if (uVar6 == 0xffffffff) {
    uStack0000000000000088 = *puVar1;
    uStack000000000000008c = uStack0000000000000088;
    FUN_012f81e4(puVar1,plVar5,
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                );
    fStack0000000000000018 = fVar14;
    FUN_010b20b8((long *)(unaff_x19 + 0xd0),(long)&stack0x00000088 + 4,&stack0x00000018,10,
                 *(undefined8 *)puVar4);
    _fStack0000000000000018 = CONCAT44(uStack000000000000001c,fVar13);
    FUN_010b20b8(unaff_x19 + 0xd8,&stack0x00000088,&stack0x00000018,10,*(undefined8 *)puVar4);
    bVar2 = true;
    bVar3 = true;
    if (*(float *)(unaff_x19 + 0xf4) <= 0.0) goto LAB_02126708;
    uVar8 = FUN_021d11ec(0);
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0xd0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    pfVar11 = (float *)(lVar10 + (long)(int)uVar6 * 4 + 0x20);
    bVar2 = true;
    if (fVar14 <= *pfVar11) goto LAB_02126708;
    *pfVar11 = fVar14;
    bVar2 = true;
    bVar3 = true;
    if (*(float *)(unaff_x19 + 0xf4) <= 0.0) goto LAB_02126708;
    uVar8 = FUN_021d11ec(0);
  }
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar8;
  bVar2 = true;
  bVar3 = true;
  goto LAB_02126708;
}


