/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_as_vx_resp_sessiongroup_add_session
ENTRY_POINT: 078efa74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_as_vx_resp_sessiongroup_add_session
          (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if ((DAT_08987b3d & 1) == 0) {
    FUN_03a8a718(Unity_Services_Vivox_ReadWriteQueue<ITranscribedMessage>_TypeInfo);
    DAT_08987b3d = 1;
  }
  puVar1 = Unity_Services_Vivox_ReadWriteQueue<ITranscribedMessage>_TypeInfo;
  if (param_2 == 0) {
LAB_078efb60:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar4 = *(ulong *)(param_2 + 0x18);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    if (0 < (int)uVar4) {
                    /* try { // try from 078efab4 to 079efabf has its CatchHandler @ 078efe38 */
      uVar6 = 0;
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        if ((uVar4 & 0xffffffff) <= uVar6) goto LAB_078efb5c;
        uVar4 = FUN_065cd284(*puVar5,0);
        if ((uVar4 & 1) == 0) {
                    /* try { // try from 078efad8 to 079efadf has its CatchHandler @ 078efe14 */
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
            lVar2 = *(long *)puVar1;
          }
          if (*(uint *)(param_2 + 0x18) <= uVar6) goto LAB_078efb5c;
          if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_078efb60;
          uVar4 = FUN_06f1e1f4(**(long **)(lVar2 + 0xb8),*puVar5,0);
          if ((uVar4 & 1) != 0) {
            if ((uint)uVar6 < *(uint *)(param_2 + 0x18)) goto LAB_078efb48;
            goto LAB_078efb5c;
          }
        }
        uVar4 = (ulong)*(uint *)(param_2 + 0x18);
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    if ((int)uVar4 == 0) {
LAB_078efb5c:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    puVar5 = (undefined8 *)(param_2 + 0x20);
LAB_078efb48:
    uVar3 = *puVar5;
  }
  return uVar3;
}


