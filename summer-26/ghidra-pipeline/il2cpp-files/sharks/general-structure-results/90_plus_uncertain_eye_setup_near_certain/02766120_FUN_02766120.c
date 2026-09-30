/*
FUNCTION_NAME: FUN_02766120
ENTRY_POINT: 02766120
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02766120(long param_1,int param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 027660dc with catch @ 02766134
                       try { // try from 02766134 to 0286614b has its CatchHandler @ 02766094 */
  if (param_2 < param_3) {
    if (param_1 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
                    /* try { // try from 0276614c to 02866163 has its CatchHandler @ 027661d8 */
                    /* try { // try from 02766164 to 028661c7 has its CatchHandler @ 02766094 */
    uVar10 = (long)param_2;
    do {
      uVar2 = uVar10 + 1;
      uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
      if (uVar5 <= (uint)uVar2) {
LAB_0276631c:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar8 = param_1 + uVar2 * 0x18;
      uVar9 = *(undefined8 *)(lVar8 + 0x30);
      uVar13 = *(undefined8 *)(lVar8 + 0x28);
      uVar11 = *(undefined8 *)(lVar8 + 0x20);
      if ((long)param_2 <= (long)uVar10) {
        bVar3 = uVar5 <= (uint)uVar10;
        while( true ) {
          if (bVar3) goto LAB_0276631c;
          uVar5 = (uint)uVar10;
          lVar8 = param_1 + (long)(int)uVar5 * 0x18;
          uVar6 = *(undefined8 *)(lVar8 + 0x30);
          uVar14 = *(undefined8 *)(lVar8 + 0x28);
          uVar12 = *(undefined8 *)(lVar8 + 0x20);
          if (param_4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose;
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          local_a0 = uVar12;
          uStack_98 = uVar14;
          local_90 = uVar6;
          local_80 = uVar11;
          uStack_78 = uVar13;
          local_70 = uVar9;
          iVar4 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&local_80,&local_a0,
                             *(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar4) break;
          if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_0276631c;
          uVar12 = *(undefined8 *)(lVar8 + 0x28);
          uVar6 = *(undefined8 *)(lVar8 + 0x20);
          if (*(uint *)(param_1 + 0x18) <= uVar5 + 1) goto LAB_0276631c;
          lVar7 = param_1 + (long)(int)(uVar5 + 1) * 0x18;
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
          *(undefined8 *)(lVar7 + 0x28) = uVar12;
          *(undefined8 *)(lVar7 + 0x20) = uVar6;
          thunk_FUN_0188fd20(lVar7 + 0x20,0);
          uVar5 = uVar5 - 1;
          uVar10 = (ulong)uVar5;
          if ((int)uVar5 < param_2) break;
          bVar3 = *(uint *)(param_1 + 0x18) <= uVar5;
        }
        uVar5 = *(uint *)(param_1 + 0x18);
      }
      uVar1 = (int)uVar10 + 1;
      if (uVar5 <= uVar1) goto LAB_0276631c;
      lVar8 = param_1 + (long)(int)uVar1 * 0x18;
      *(undefined8 *)(lVar8 + 0x30) = uVar9;
      *(undefined8 *)(lVar8 + 0x28) = uVar13;
      *(undefined8 *)(lVar8 + 0x20) = uVar11;
      thunk_FUN_0188fd20(lVar8 + 0x20,0);
      uVar10 = uVar2;
    } while (uVar2 != (long)param_3);
  }
  return;
}


