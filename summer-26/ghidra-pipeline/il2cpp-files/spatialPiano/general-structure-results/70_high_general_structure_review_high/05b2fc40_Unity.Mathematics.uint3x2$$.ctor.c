/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$.ctor
ENTRY_POINT: 05b2fc40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_17;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05b3021c) */
/* WARNING: Removing unreachable block (ram,0x05b30140) */
/* WARNING: Removing unreachable block (ram,0x05b3016c) */

void Unity_Mathematics_uint3x2___ctor(undefined1 param_1 [16],long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int extraout_var;
  int in_w8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint unaff_w19;
  uint unaff_w20;
  long *unaff_x23;
  undefined1 auVar12 [16];
  ulong in_stack_00000000;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000050;
  undefined1 *in_stack_00000058;
  ulong uStack0000000000000070;
  undefined8 *puStack0000000000000078;
  ulong uStack0000000000000080;
  undefined8 *puStack0000000000000088;
  ulong uStack0000000000000090;
  undefined8 *puStack0000000000000098;
  ulong uStack00000000000000a0;
  undefined8 *puStack00000000000000a8;
  ulong in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  ulong uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  ulong uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  ulong uStack0000000000000100;
  undefined8 uStack0000000000000108;
  ulong uStack0000000000000110;
  undefined8 uStack0000000000000118;
  ulong in_stack_00000120;
  undefined8 *in_stack_00000128;
  ulong in_stack_00000130;
  undefined8 *in_stack_00000138;
  long *in_stack_00000148;
  
  puStack0000000000000078 = param_1._8_8_;
  uStack0000000000000070 = param_1._0_8_;
  uStack0000000000000080 = uStack0000000000000070;
  puStack0000000000000088 = puStack0000000000000078;
  uStack0000000000000090 = uStack0000000000000070;
  puStack0000000000000098 = puStack0000000000000078;
  uStack00000000000000a0 = uStack0000000000000070;
  puStack00000000000000a8 = puStack0000000000000078;
  uStack00000000000000e0 = uStack0000000000000070;
  uStack00000000000000f0 = uStack0000000000000070;
  uStack0000000000000100 = uStack0000000000000070;
  uStack0000000000000110 = uStack0000000000000070;
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
    param_2 = *unaff_x23;
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0xb8) + 0x30);
  if (lVar9 == 0) {
LAB_05b301ec:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
LAB_05b301e8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  if (*(char *)(lVar9 + (long)(int)unaff_w19 * 0xb8 + 0x58) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
    if (lVar9 == 0) goto LAB_05b301ec;
  }
  if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_05b301e8;
  FUN_05ab4dbc(lVar9 + (long)(int)unaff_w19 * 0xb8 + 0x78,0);
  lVar9 = *unaff_x23;
  uStack00000000000000e8 = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000f0 = 0;
  uStack0000000000000108 = 0;
  uStack0000000000000100 = 0;
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *unaff_x23;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  FUN_03e1a160(lVar9 + (long)(int)unaff_w19 * 0xb8 + 0x58,
               *(undefined8 *)
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate>__
              );
  in_stack_000000b8 = in_stack_00000008;
  in_stack_000000b0 = in_stack_00000000;
  in_stack_000000c0 = in_stack_00000010;
  FUN_05ab43c0(&stack0x000000b0,0);
  if (extraout_var < 1) goto LAB_05b30170;
  FUN_037b77b0(&stack0x00000090,2,0,
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset__
              );
  lVar9 = *unaff_x23;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined1 *)&stack0x00000090;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *unaff_x23;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  auVar12 = FUN_05b210f0(lVar9 + (long)(int)unaff_w19 * 4 + 0x20);
  FUN_0303a2c0(&stack0x00000090,auVar12._0_8_,auVar12._8_8_,0xffffffff,0xffffffff,0,
               *(undefined8 *)Method_System_CharEnumerator__ctor__);
  uVar10 = uStack0000000000000090;
  if ((unaff_w20 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_05b30ee0(&stack0x00000090);
    lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(char *)(lVar9 + (long)(int)unaff_w19 * 0xb8 + 0x20) != '\0') {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar9 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      auVar12 = FUN_03e1b228(lVar9 + (long)(int)unaff_w19 * 0xb8 + 0x20,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_CharacterControllerDriver_OnBeginLocomotion__
                            );
      FUN_0303ad68(&stack0x00000090,uVar10 & 0xffffffff,uVar4,auVar12._0_8_,auVar12._8_8_,
                   *(undefined8 *)Method_System_Data_Common_CharStorage_Aggregate__);
    }
  }
  in_stack_00000128 = puStack0000000000000098;
  in_stack_00000120 = uStack0000000000000090;
  in_stack_00000138 = puStack00000000000000a8;
  in_stack_00000130 = uStack00000000000000a0;
  FUN_03445de0(&stack0x000000b0,&stack0x00000120,0,
               *(undefined8 *)Method_System_Data_Common_CharStorage_Set__);
  memcpy(&stack0x000000d0,&stack0x00000000,0x50);
  uVar5 = FUN_05ab4b60(&stack0x000000d0,0);
  if ((uVar5 & unaff_w20 & 1) != 0) {
    lVar9 = *unaff_x23;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar9 = *unaff_x23;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(lVar9 + 0x18) <= unaff_w19) ||
       (memmove((void *)(lVar9 + (long)(int)unaff_w19 * 0xb8 + 0x78),&stack0x000000d0,0x50),
       *(uint *)(lVar9 + 0x18) <= unaff_w19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05ab4b90(&stack0x000000d0,0);
    puStack0000000000000078 = in_stack_00000008;
    uStack0000000000000070 = in_stack_00000000;
    puStack0000000000000088 = in_stack_00000018;
    uStack0000000000000080 = in_stack_00000010;
    plVar6 = (long *)FUN_037b8b20(&stack0x00000070,
                                  *(undefined8 *)Method_System_CharEnumerator_get_Current__);
    puVar3 = Method_System_Xml_CharEntityEncoderFallbackBuffer_Fallback__;
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<XRInputDeviceFloatValueReader>_TryGet__
    ;
    puVar1 = PTR_DAT_067c91b8;
    in_stack_00000008 = &stack0x00000148;
    in_stack_00000000 = 0;
    do {
      in_stack_00000148 = plVar6;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05b2ffd4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar1,0);
LAB_05b2ffd4:
      uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = in_stack_00000148;
      if ((uVar10 & 1) == 0) {
        if (in_stack_00000148 == (long *)0x0) break;
        lVar9 = *in_stack_00000148;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_05b3010c;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_05b300f4;
      }
      if (in_stack_00000148 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *in_stack_00000148;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05b30038;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000148,*(long *)puVar3,0);
LAB_05b30038:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar9 = *unaff_x23;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar9 = *unaff_x23;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      auVar12 = FUN_05b210f0(lVar9 + (long)(int)unaff_w19 * 4 + 0x20);
      uVar10 = FUN_03520a98(auVar12._0_8_,auVar12._8_8_,uVar8,*(undefined8 *)puVar2);
      plVar6 = in_stack_00000148;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05b31804(unaff_w19,uVar8,0,1);
        plVar6 = in_stack_00000148;
      }
    } while( true );
  }
  goto LAB_05b30144;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_05b300f4:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05b30128;
    }
  }
LAB_05b3010c:
  puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000148,*(long *)PTR_DAT_067c91b0,0);
LAB_05b30128:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_05b30144:
  FUN_037b8ab8(in_stack_00000058,*(undefined8 *)Method_System_Array_Empty<Sequence_ActivationStep>__
              );
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
LAB_05b30170:
  lVar9 = *unaff_x23;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *unaff_x23;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
  if (lVar9 != 0) {
    if ((unaff_w19 < *(uint *)(lVar9 + 0x18)) &&
       (memmove((void *)(lVar9 + (long)(int)unaff_w19 * 0xb8 + 0x78),&stack0x000000d0,0x50),
       unaff_w19 < *(uint *)(lVar9 + 0x18))) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


