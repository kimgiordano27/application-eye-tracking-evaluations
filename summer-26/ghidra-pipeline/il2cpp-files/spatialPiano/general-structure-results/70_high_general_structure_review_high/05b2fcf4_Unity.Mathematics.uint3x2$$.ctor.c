/*
FUNCTION_NAME: Unity.Mathematics.uint3x2$$.ctor
ENTRY_POINT: 05b2fcf4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05b3021c) */
/* WARNING: Removing unreachable block (ram,0x05b30140) */
/* WARNING: Removing unreachable block (ram,0x05b3016c) */

void Unity_Mathematics_uint3x2___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int extraout_var;
  ulong uVar11;
  int *piVar12;
  uint unaff_w19;
  uint unaff_w20;
  long *unaff_x23;
  int iVar13;
  long unaff_x24;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long *in_stack_00000148;
  
  if (*(uint *)(param_1 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  iVar13 = (int)unaff_x24;
  FUN_03e1a160(param_1 + (long)iVar13 * 0xb8 + 0x58,
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
  lVar7 = *unaff_x23;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)&stack0x00000090;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *unaff_x23;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(lVar7 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  auVar14 = FUN_05b210f0(lVar7 + unaff_x24 * 4 + 0x20);
  FUN_0303a2c0(&stack0x00000090,auVar14._0_8_,auVar14._8_8_,0xffffffff,0xffffffff,0,
               *(undefined8 *)Method_System_CharEnumerator__ctor__);
  uVar4 = uStack0000000000000090;
  if ((unaff_w20 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_05b30ee0(&stack0x00000090);
    lVar7 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(char *)(lVar7 + (long)iVar13 * 0xb8 + 0x20) != '\0') {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      auVar14 = FUN_03e1b228(lVar7 + (long)iVar13 * 0xb8 + 0x20,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_CharacterControllerDriver_OnBeginLocomotion__
                            );
      FUN_0303ad68(&stack0x00000090,uVar4,uVar5,auVar14._0_8_,auVar14._8_8_,
                   *(undefined8 *)Method_System_Data_Common_CharStorage_Aggregate__);
    }
  }
  in_stack_00000120 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
  in_stack_00000128 = in_stack_00000098;
  in_stack_00000138 = in_stack_000000a8;
  in_stack_00000130 = in_stack_000000a0;
  FUN_03445de0(&stack0x000000b0,&stack0x00000120,0,
               *(undefined8 *)Method_System_Data_Common_CharStorage_Set__);
  memcpy(&stack0x000000d0,&stack0x00000000,0x50);
  uVar6 = FUN_05ab4b60(&stack0x000000d0,0);
  if ((uVar6 & unaff_w20 & 1) != 0) {
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *unaff_x23;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(lVar7 + 0x18) <= unaff_w19) ||
       (memmove((void *)(lVar7 + (long)iVar13 * 0xb8 + 0x78),&stack0x000000d0,0x50),
       *(uint *)(lVar7 + 0x18) <= unaff_w19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05ab4b90(&stack0x000000d0,0);
    in_stack_00000078 = in_stack_00000008;
    in_stack_00000070 = in_stack_00000000;
    in_stack_00000088 = in_stack_00000018;
    in_stack_00000080 = in_stack_00000010;
    plVar8 = (long *)FUN_037b8b20(&stack0x00000070,
                                  *(undefined8 *)Method_System_CharEnumerator_get_Current__);
    puVar3 = Method_System_Xml_CharEntityEncoderFallbackBuffer_Fallback__;
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<XRInputDeviceFloatValueReader>_TryGet__
    ;
    puVar1 = PTR_DAT_067c91b8;
    in_stack_00000008 = &stack0x00000148;
    in_stack_00000000 = 0;
    do {
      in_stack_00000148 = plVar8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar7 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05b2ffd4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,0);
LAB_05b2ffd4:
      uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      plVar8 = in_stack_00000148;
      if ((uVar11 & 1) == 0) {
        if (in_stack_00000148 == (long *)0x0) break;
        lVar7 = *in_stack_00000148;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 == 0) goto LAB_05b3010c;
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_05b300f4;
      }
      if (in_stack_00000148 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar7 = *in_stack_00000148;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05b30038;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(in_stack_00000148,*(long *)puVar3,0);
LAB_05b30038:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar7 = *unaff_x23;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *unaff_x23;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      auVar14 = FUN_05b210f0(lVar7 + unaff_x24 * 4 + 0x20);
      uVar11 = FUN_03520a98(auVar14._0_8_,auVar14._8_8_,uVar10,*(undefined8 *)puVar2);
      plVar8 = in_stack_00000148;
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05b31804(unaff_w19,uVar10,0,1);
        plVar8 = in_stack_00000148;
      }
    } while( true );
  }
  goto LAB_05b30144;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_05b300f4:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_05b30128;
    }
  }
LAB_05b3010c:
  puVar9 = (undefined8 *)FUN_02f421d0(in_stack_00000148,*(long *)PTR_DAT_067c91b0,0);
LAB_05b30128:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_05b30144:
  FUN_037b8ab8(in_stack_00000058,*(undefined8 *)Method_System_Array_Empty<Sequence_ActivationStep>__
              );
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
LAB_05b30170:
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *unaff_x23;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if ((unaff_w19 < *(uint *)(lVar7 + 0x18)) &&
     (memmove((void *)(lVar7 + (long)iVar13 * 0xb8 + 0x78),&stack0x000000d0,0x50),
     unaff_w19 < *(uint *)(lVar7 + 0x18))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


