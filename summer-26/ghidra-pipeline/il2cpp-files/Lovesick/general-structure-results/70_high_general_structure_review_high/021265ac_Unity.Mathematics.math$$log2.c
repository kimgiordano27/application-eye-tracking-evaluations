/*
FUNCTION_NAME: Unity.Mathematics.math$$log2
ENTRY_POINT: 021265ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


void Unity_Mathematics_math__log2(ulong param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  float *pfVar13;
  undefined4 uVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  ulong in_stack_00000128;
  float fStack0000000000000138;
  float fStack000000000000013c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12008);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Color>_Clear__);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Quaternion>_ResizeInitialized__);
    thunk_FUN_00d48444(PTR_DAT_033eb750);
    thunk_FUN_00d48444(Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
    thunk_FUN_00d48444(StringLiteral_441);
    thunk_FUN_00d48444(
                      Method_System_Data_DataRelationCollection_DataTableRelationCollection_get_Item__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    *(undefined1 *)(unaff_x20 + 0x109) = 1;
  }
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  fStack0000000000000138 = 0.0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = (long *)0x0;
  in_stack_000000f0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  iVar7 = FUN_021cc9d4(&stack0x00000128,0);
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((iVar7 == 0x53544154) || (iVar7 == 0x444c5441)) {
    uVar14 = 0x14;
    if ((*(uint *)(unaff_x19 + 0x168) & 0x40) != 0) {
      uVar14 = 0x1c;
    }
    Unity_Mathematics_bool4__get_ywxz(&stack0x00000018,0,in_stack_00000128,uVar14);
    in_stack_000000a0 = in_stack_00000028;
    in_stack_00000098 = in_stack_00000020;
    in_stack_00000090 = _fStack0000000000000018;
    FUN_0214730c(&stack0x00000018,&stack0x00000090,0);
    memcpy(&stack0x000000b0,&stack0x00000018,0x70);
    bVar2 = false;
    bVar3 = false;
    puVar1 = (undefined4 *)(unaff_x19 + 0xf8);
LAB_02126708:
    uVar9 = Unity_Mathematics_bool4__get_zxyx(&stack0x000000b0,0);
    plVar6 = in_stack_000000f8;
    if ((uVar9 & 1) != 0) {
      uVar10 = FUN_021466f4(in_stack_000000f8,in_stack_00000128,iVar7,0);
      uVar9 = FUN_015ff8a0(*(undefined8 *)(unaff_x19 + 0xc0),0);
      if ((((uVar9 & 1) == 0) &&
          (uVar9 = FUN_02149214(*(undefined8 *)(unaff_x19 + 0xc0),plVar6,0), (uVar9 & 1) != 0)) &&
         (uVar9 = FUN_02146560(plVar6,uVar10,0), (uVar9 & 1) != 0)) {
        FUN_02125b74();
        goto LAB_02126ac0;
      }
      if (((*(int *)(unaff_x19 + 0xa0) < 1) ||
          (uVar9 = FUN_02126cac(plVar6,*(undefined8 *)(unaff_x19 + 0xa8)), (uVar9 & 1) == 0)) &&
         ((*(int *)(unaff_x19 + 0x90) < 1 ||
          (uVar9 = FUN_02126cac(plVar6,*(undefined8 *)(unaff_x19 + 0x98)), (uVar9 & 1) != 0)))) {
        uVar15 = *(undefined8 *)(unaff_x19 + 0x78);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_0178a8c4(uVar15,0,0);
        if ((uVar9 & 1) != 0) {
          plVar11 = *(long **)(unaff_x19 + 0x78);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = (**(code **)(*plVar11 + 0x8b8))(plVar11,plVar6,*(undefined8 *)(*plVar11 + 0x8c0));
          if ((uVar9 & 1) == 0) goto LAB_02126708;
        }
        uVar9 = FUN_021fe5e8(unaff_x19 + 0x80,0);
        if ((uVar9 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_021f5d74(*(undefined8 *)(unaff_x19 + 0x80),*(undefined8 *)(unaff_x19 + 0x88),
                               plVar6[0xb],plVar6[0xc],0);
          if ((uVar9 & 1) != 0) {
            lVar12 = *(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
            ;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar12 = *(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
              ;
            }
            uVar9 = FUN_021ef194(*(long *)(lVar12 + 0xb8) + 0x10,*(undefined8 *)(unaff_x19 + 0x80),
                                 *(undefined8 *)(unaff_x19 + 0x88),plVar6[0xb],plVar6[0xc],0);
            if ((uVar9 & 1) == 0) goto LAB_02126708;
          }
        }
        uVar9 = FUN_02146034(plVar6,uVar10,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_0129aa60(*(long *)(unaff_x19 + 0x170),plVar6,
                               *(undefined8 *)
                                Method_Obi_ObiNativeList<Quaternion>_ResizeInitialized__);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            _fStack0000000000000018 = _fStack0000000000000018 & 0xffffffff00000000;
            FUN_0129a054(*(long *)(unaff_x19 + 0x170),plVar6,&stack0x00000018,
                         *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
          }
          if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          _fStack0000000000000018 = _fStack0000000000000018 & 0xffffffff00000000;
          FUN_01299e64(*(long *)(unaff_x19 + 0x170),plVar6,&stack0x00000018,
                       *(undefined8 *)
                        Method_System_Runtime_Remoting_Channels_ChannelServices_CreateProvider__);
          goto LAB_02126708;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar16 = (float)(**(code **)(*plVar6 + 0x198))
                                  (plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x1a0));
        if (0.0 <= fVar16) {
          if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_0129eff4(*(long *)(unaff_x19 + 0x170),plVar6,&stack0x00000138,
                               *(undefined8 *)PTR_DAT_033eb750);
          if ((uVar9 & 1) == 0) {
            fStack0000000000000138 = (float)thunk_FUN_02144284(plVar6,0);
            if (*(long *)(unaff_x19 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            _fStack0000000000000018 = CONCAT44(uStack000000000000001c,fStack0000000000000138);
            FUN_0129a054(*(long *)(unaff_x19 + 0x170),plVar6,&stack0x00000018,
                         *(undefined8 *)Method_System_Collections_Generic_List<Color>_Clear__);
          }
          bVar2 = true;
          if (ABS(fStack0000000000000138 - fVar16) < *(float *)(unaff_x19 + 200)) goto LAB_02126708;
        }
        lVar12 = *(long *)(unaff_x19 + 0x138);
        if (lVar12 == 0) {
          uVar9 = FUN_02144170(plVar6,0);
          fVar17 = fVar16;
          if ((uVar9 & 1) == 0) {
            fVar17 = fVar16 + 1.0;
          }
        }
        else {
          _fStack0000000000000018 = in_stack_00000128;
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),plVar6,&stack0x00000018,
                     (long)&stack0x00000138 + 4,*(undefined8 *)(lVar12 + 0x28));
          fVar17 = fStack000000000000013c;
        }
        puVar5 = StringLiteral_12008;
        uVar8 = FUN_012f8c34(puVar1,plVar6,*(undefined8 *)StringLiteral_441);
        if (uVar8 == 0xffffffff) {
          in_stack_00000088 = CONCAT44(*puVar1,*puVar1);
          FUN_012f81e4(puVar1,plVar6,
                       *(undefined8 *)
                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                      );
          fStack0000000000000018 = fVar17;
          FUN_010b20b8((long *)(unaff_x19 + 0xd0),(long)&stack0x00000088 + 4,&stack0x00000018,10,
                       *(undefined8 *)puVar5);
          _fStack0000000000000018 = CONCAT44(uStack000000000000001c,fVar16);
          FUN_010b20b8(unaff_x19 + 0xd8,&stack0x00000088,&stack0x00000018,10,*(undefined8 *)puVar5);
          bVar2 = true;
          bVar3 = true;
          if (*(float *)(unaff_x19 + 0xf4) <= 0.0) goto LAB_02126708;
          uVar10 = FUN_021d11ec(0);
        }
        else {
          lVar12 = *(long *)(unaff_x19 + 0xd0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          pfVar13 = (float *)(lVar12 + (long)(int)uVar8 * 4 + 0x20);
          bVar2 = true;
          if (fVar17 <= *pfVar13) goto LAB_02126708;
          *pfVar13 = fVar17;
          bVar2 = true;
          bVar3 = true;
          if (*(float *)(unaff_x19 + 0xf4) <= 0.0) goto LAB_02126708;
          uVar10 = FUN_021d11ec(0);
        }
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar10;
        bVar2 = true;
        bVar3 = true;
      }
      goto LAB_02126708;
    }
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
        lVar12 = *(long *)(unaff_x19 + 0x128);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40));
      }
    }
  }
  return;
}


