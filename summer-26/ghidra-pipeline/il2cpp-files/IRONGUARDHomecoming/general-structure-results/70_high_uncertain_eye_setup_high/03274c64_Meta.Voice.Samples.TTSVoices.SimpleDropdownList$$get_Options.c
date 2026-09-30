/*
FUNCTION_NAME: Meta.Voice.Samples.TTSVoices.SimpleDropdownList$$get_Options
ENTRY_POINT: 03274c64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03274d48) */
/* WARNING: Removing unreachable block (ram,0x03274d44) */
/* WARNING: Removing unreachable block (ram,0x03274d88) */

void Meta_Voice_Samples_TTSVoices_SimpleDropdownList__get_Options
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_03274bd0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03274bd0:
        (*(code *)*puVar1)();
        FUN_032746b8();
        lVar2 = *unaff_x23;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto Meta_Voice_Samples_TTSVoices_SimpleDropdownOptionEvent___ctor;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
Meta_Voice_Samples_TTSVoices_SimpleDropdownOptionEvent___ctor:
        uVar3 = (*(code *)*puVar1)();
        if ((uVar3 & 1) == 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_03274d38;
          lVar2 = *unaff_x23;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 == 0) goto LAB_03274d10;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_03274cf8;
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_03274cf8:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_03274d2c;
    }
  }
LAB_03274d10:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03274d2c:
  (*(code *)*puVar1)();
LAB_03274d38:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


