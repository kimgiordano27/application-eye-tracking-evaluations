/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity$$GetAssetPostfix
ENTRY_POINT: 0562cb28
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0562cc38) */

void Meta_XR_MultiplayerBlocks_Shared_AvatarEntity__GetAssetPostfix
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0562ca90;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_032937ac();
LAB_0562ca90:
        (*(code *)*puVar1)();
        FUN_0562bb70();
        lVar2 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x22) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0562cadc;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_032937ac();
LAB_0562cadc:
        uVar3 = (*(code *)*puVar1)();
        if ((uVar3 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) {
            return;
          }
          lVar2 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 == 0) goto LAB_0562cbbc;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_0562cba4;
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_032934b8(param_3);
        }
        param_1 = *unaff_x19;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_0562cba4:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0562cbd8;
    }
  }
LAB_0562cbbc:
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_0562cbd8:
  (*(code *)*puVar1)();
  return;
}


