/*
FUNCTION_NAME: FUN_05b2fb18
ENTRY_POINT: 05b2fb18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b3021c) */
/* WARNING: Removing unreachable block (ram,0x05b30140) */
/* WARNING: Removing unreachable block (ram,0x05b3016c) */

void FUN_05b2fb18(uint param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int extraout_var;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined8 local_190;
  long **pplStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_140;
  ulong *local_138;
  undefined4 local_128;
  undefined8 local_120;
  long **pplStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long **pplStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *local_48;
  
  puVar2 = PTR_DAT_067c99a8;
  if ((DAT_06bc29b5 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_System_Xml_CharEntityEncoderFallbackBuffer_Fallback__);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(Method_System_CharEnumerator__ctor__);
    FUN_02f08768(Method_System_Array_Empty<Sequence_ActivationStep>__);
    FUN_02f08768(Method_System_CharEnumerator_get_Current__);
    FUN_02f08768(Method_System_Data_Common_CharStorage_Aggregate__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset__
                );
    FUN_02f08768(Method_System_Array_Empty<Event_Type>__);
    FUN_02f08768(Method_System_Data_Common_CharStorage_Set__);
    FUN_02f08768(PTR_DAT_067c99a8);
    FUN_02f08768(Method_UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Color>__ctor__);
    FUN_02f08768(Method_System_Globalization_CharUnicodeInfo_GetUnicodeCategory__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_CharacterControllerDriver_OnBeginLocomotion__
                );
    FUN_02f08768(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<XRInputDeviceFloatValueReader>_TryGet__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_CharacterControllerDriver_OnEndLocomotion__
                );
    DAT_06bc29b5 = 1;
  }
  lVar7 = *(long *)puVar2;
  local_e0 = 0;
  pplStack_d8 = (long **)0x0;
  local_d0 = 0;
  local_48 = (long *)0x0;
  local_128 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  pplStack_118 = (long **)0x0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar11 == 0) {
LAB_05b301ec:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(lVar11 + 0x18) <= param_1) {
LAB_05b301e8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  if (*(char *)(lVar11 + (long)(int)param_1 * 0xb8 + 0x58) == '\0') {
    return;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    if (lVar11 == 0) goto LAB_05b301ec;
  }
  if (*(uint *)(lVar11 + 0x18) <= param_1) goto LAB_05b301e8;
  FUN_05ab4dbc(lVar11 + (long)(int)param_1 * 0xb8 + 0x78,0);
  lVar7 = *(long *)puVar2;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(lVar7 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  FUN_03e1a160(&local_190,lVar7 + (long)(int)param_1 * 0xb8 + 0x58,
               *(undefined8 *)
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRPokeLogic_CalculatePokeParams_000010BD_PostfixBurstDelegate>__
              );
  pplStack_d8 = pplStack_188;
  local_e0 = local_190;
  local_d0 = local_180;
  FUN_05ab43c0(&local_e0,0);
  if (extraout_var < 1) goto LAB_05b30170;
  FUN_037b77b0(&local_100,2,0,
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset__
              );
  lVar7 = *(long *)puVar2;
  local_140 = 0;
  local_138 = &local_100;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(uint *)(lVar7 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  auVar14 = FUN_05b210f0(lVar7 + (long)(int)param_1 * 4 + 0x20);
  FUN_0303a2c0(&local_100,auVar14._0_8_,auVar14._8_8_,0xffffffff,0xffffffff,0,
               *(undefined8 *)Method_System_CharEnumerator__ctor__);
  uVar12 = local_100;
  if ((param_2 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_05b30ee0(&local_100);
    lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(lVar7 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(char *)(lVar7 + (long)(int)param_1 * 0xb8 + 0x20) != '\0') {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      if (*(uint *)(lVar7 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      auVar14 = FUN_03e1b228(lVar7 + (long)(int)param_1 * 0xb8 + 0x20,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_CharacterControllerDriver_OnBeginLocomotion__
                            );
      FUN_0303ad68(&local_100,uVar12 & 0xffffffff,uVar5,auVar14._0_8_,auVar14._8_8_,
                   *(undefined8 *)Method_System_Data_Common_CharStorage_Aggregate__);
    }
  }
  uStack_68 = uStack_f8;
  local_70 = local_100;
  uStack_58 = uStack_e8;
  uStack_60 = uStack_f0;
  FUN_03445de0(&local_190,&local_e0,&local_70,0,
               *(undefined8 *)Method_System_Data_Common_CharStorage_Set__);
  memcpy(&local_c0,&local_190,0x50);
  uVar6 = FUN_05ab4b60(&local_c0,0);
  if ((uVar6 & param_2 & 1) != 0) {
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(lVar7 + 0x18) <= param_1) ||
       (memmove((void *)(lVar7 + (long)(int)param_1 * 0xb8 + 0x78),&local_c0,0x50),
       *(uint *)(lVar7 + 0x18) <= param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05ab4b90(&local_190,&local_c0,0);
    pplStack_118 = pplStack_188;
    local_120 = local_190;
    uStack_108 = uStack_178;
    uStack_110 = local_180;
    plVar8 = (long *)FUN_037b8b20(&local_120,
                                  *(undefined8 *)Method_System_CharEnumerator_get_Current__);
    puVar4 = Method_System_Xml_CharEntityEncoderFallbackBuffer_Fallback__;
    puVar3 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<XRInputDeviceFloatValueReader>_TryGet__
    ;
    puVar1 = PTR_DAT_067c91b8;
    pplStack_188 = &local_48;
    local_190 = 0;
    do {
      local_48 = plVar8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar7 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05b2ffd4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar1,0);
LAB_05b2ffd4:
      uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      plVar8 = local_48;
      if ((uVar12 & 1) == 0) {
        if (local_48 == (long *)0x0) break;
        lVar7 = *local_48;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 == 0) goto LAB_05b3010c;
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_05b300f4;
      }
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar7 = *local_48;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05b30038;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar4,0);
LAB_05b30038:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar7 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      auVar14 = FUN_05b210f0(lVar7 + (long)(int)param_1 * 4 + 0x20);
      uVar12 = FUN_03520a98(auVar14._0_8_,auVar14._8_8_,uVar10,*(undefined8 *)puVar3);
      plVar8 = local_48;
      if ((uVar12 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05b31804(param_1,uVar10,0,1);
        plVar8 = local_48;
      }
    } while( true );
  }
  goto LAB_05b30144;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_05b300f4:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_05b30128;
    }
  }
LAB_05b3010c:
  puVar9 = (undefined8 *)FUN_02f421d0(local_48,*(long *)PTR_DAT_067c91b0,0);
LAB_05b30128:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_05b30144:
  FUN_037b8ab8(local_138,*(undefined8 *)Method_System_Array_Empty<Sequence_ActivationStep>__);
  if (local_140 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
LAB_05b30170:
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar7 != 0) {
    if ((param_1 < *(uint *)(lVar7 + 0x18)) &&
       (memmove((void *)(lVar7 + (long)(int)param_1 * 0xb8 + 0x78),&local_c0,0x50),
       param_1 < *(uint *)(lVar7 + 0x18))) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


