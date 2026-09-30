/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderBase.UxmlSerializedData<Vector2,-float>$$Deserialize
ENTRY_POINT: 043eaea4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2,_float>__Deserialize
               (void *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  void *__src;
  long lVar4;
  ulong __n;
  undefined1 *__dest;
  undefined8 uVar5;
  undefined1 auStack_10 [8];
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar3 = *(long *)(param_2 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x58) + 0xfc);
  __dest = auStack_10 + -(__n + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_050e4454(uVar5,0);
  uVar5 = FUN_060f4090(uVar5,0);
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x58);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  __src = (void *)FUN_02f088b0(uVar5,lVar3,__dest);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 043eae44 with catch @ 043eafa8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 043eae2c with catch @ 043eafac
                        */
  memmove(__dest,__src,__n);
  memcpy(param_1,__dest,__n);
                    /* try { // try from 043eafc4 to 044eafdb has its CatchHandler @ 043eb024 */
  if (*(long *)(lVar2 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 043eafdc to 044eb013 has its CatchHandler @ 043eadac */
  return;
}


