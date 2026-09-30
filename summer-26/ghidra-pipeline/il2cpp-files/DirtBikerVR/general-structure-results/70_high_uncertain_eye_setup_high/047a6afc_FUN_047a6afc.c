/*
FUNCTION_NAME: FUN_047a6afc
ENTRY_POINT: 047a6afc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_047a6afc(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_28;
  
                    /* try { // try from 047a6b14 to 048a6b17 has its CatchHandler @ 047a6b94 */
                    /* try { // try from 047a6b18 to 048a6b1b has its CatchHandler @ 047a6b5c */
                    /* try { // try from 047a6b1c to 048a6b1f has its CatchHandler @ 047a6b20 */
                    /* catch() { ... } // from try @ 047a69e8 with catch @ 047a6b20
                       catch() { ... } // from try @ 047a6b1c with catch @ 047a6b20
                       try { // try from 047a6b20 to 048a6b3b has its CatchHandler @ 047a600c */
  if ((*(long *)(param_4 + 0x38) == 0) &&
     (FUN_03a8a718(&DAT_08619ef8), *(long *)(param_4 + 0x38) == 0)) {
                    /* try { // try from 047a6b3c to 048a6b3f has its CatchHandler @ 047a6b4c */
    FUN_03ac40ec(param_4);
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_28 = 0;
                    /* catch() { ... } // from try @ 047a6b3c with catch @ 047a6b4c */
  if (param_2 != (long *)0x0) {
                    /* try { // try from 047a6b50 to 048a6b57 has its CatchHandler @ 047a6bd0 */
                    /* try { // try from 047a6b58 to 048a6b77 has its CatchHandler @ 047a600c */
                    /* catch() { ... } // from try @ 047a6720 with catch @ 047a6b5c
                       catch() { ... } // from try @ 047a6b18 with catch @ 047a6b5c */
    (**(code **)(*param_2 + 0x218))(&local_80,param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
                    /* try { // try from 047a6b78 to 048a6b7b has its CatchHandler @ 047a6b84 */
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x98)) {
                    /* catch() { ... } // from try @ 047a6b78 with catch @ 047a6b84 */
                    /* try { // try from 047a6b88 to 048a6b8f has its CatchHandler @ 047a6bd0 */
      uVar1 = FUN_046d8454(&local_80,&local_28,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x28));
                    /* try { // try from 047a6b90 to 048a6baf has its CatchHandler @ 047a600c */
      if ((uVar1 & 1) == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 4;
      }
      else {
                    /* catch() { ... } // from try @ 047a6640 with catch @ 047a6b94
                       catch() { ... } // from try @ 047a66bc with catch @ 047a6b94
                       catch() { ... } // from try @ 047a6b14 with catch @ 047a6b94 */
        lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
                    /* try { // try from 047a6bb0 to 048a6bb3 has its CatchHandler @ 047a6bbc */
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
                    /* catch() { ... } // from try @ 047a6bb0 with catch @ 047a6bbc */
        lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
        lVar2 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar2 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        lVar7 = *(long *)(param_4 + 0x38);
        if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
          plVar3 = (long *)FUN_04447000(*(undefined8 *)(lVar7 + 0x48));
          if (plVar3 == (long *)0x0) goto LAB_047a6d50;
          uStack_48 = uStack_78;
          local_50 = local_80;
          local_40 = local_70;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uVar1 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,&local_50,&local_68,*(undefined8 *)(*plVar3 + 0x1c0));
          lVar7 = *(long *)(param_4 + 0x38);
          if ((uVar1 & 1) != 0) {
            uVar4 = FUN_0548ef50(param_2,*(undefined8 *)(lVar7 + 0x20));
            plVar3 = (long *)FUN_07d36da8(uVar4,0);
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar2 = *plVar3;
            uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar1 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08492fc8) {
                  puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_047a6d2c;
                }
                uVar1 = uVar1 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar1 != 0);
            }
            puVar5 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)PTR_DAT_08492fc8,0);
LAB_047a6d2c:
            (*(code *)*puVar5)(plVar3,param_1,puVar5[1]);
            return;
          }
        }
        System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_Vector4f>
                  (param_1,&local_80,0,*(undefined8 *)(lVar7 + 0x68));
      }
    }
    else {
      uVar4 = FUN_0548ef50(param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
      thunk_FUN_03afed3c((undefined8 *)(param_1 + 0xa0),uVar4);
    }
    return;
  }
LAB_047a6d50:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


