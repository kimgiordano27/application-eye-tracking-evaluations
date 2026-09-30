/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_sessiongroup_handle_get
ENTRY_POINT: 0811c914
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_get
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long *unaff_x21;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_03cf1348();
      goto LAB_0811c944;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
LAB_0811c944:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
LAB_0811caa4:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e84c28) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0811c9ac;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e84c28,0);
LAB_0811c9ac:
  plVar3 = (long *)(*(code *)*puVar2)(plVar3,0,puVar2[1]);
  if (plVar3 == (long *)0x0) goto LAB_0811caa4;
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_0811ca14;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348(plVar3,*unaff_x21,6);
LAB_0811ca14:
  plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08eebd58 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08eebd58)) {
      plVar3 = plVar3 + 6;
      goto LAB_0811ca8c;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_085a437c(*(undefined8 *)PTR_DAT_08f02640,0);
  plVar3 = (long *)PTR_DAT_08e69460;
LAB_0811ca8c:
  return *plVar3;
}


