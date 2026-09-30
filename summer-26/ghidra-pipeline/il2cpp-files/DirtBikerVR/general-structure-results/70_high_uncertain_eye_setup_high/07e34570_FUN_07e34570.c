/*
FUNCTION_NAME: FUN_07e34570
ENTRY_POINT: 07e34570
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_07e34570(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0899a67f & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08493d50);
    FUN_03a8a718(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_MouseUpEvent_<>c_TypeInfo);
                    /* try { // try from 07e345c4 to 07f345cf has its CatchHandler @ 07e34f54 */
    DAT_0899a67f = 1;
  }
  if ((param_4 == 0) || (*(long *)(param_3 + 0x10) == 0)) goto LAB_07e347e8;
  fVar9 = *(float *)(param_4 + 0xa0);
  fVar10 = *(float *)(param_4 + 0xa4);
  fVar8 = (float)FUN_07e06150(*(long *)(param_3 + 0x10),0);
  if (*(long *)(param_3 + 0x10) == 0) goto LAB_07e347e8;
                    /* try { // try from 07e345ec to 07f345ff has its CatchHandler @ 07e34f60 */
  FUN_07e06150(*(long *)(param_3 + 0x10),0);
                    /* try { // try from 07e34600 to 07f34623 has its CatchHandler @ 07e33de8 */
  if ((*(long *)(param_3 + 0x10) == 0) || (*(long *)(*(long *)(param_3 + 0x10) + 0x2e8) == 0))
  goto LAB_07e347e8;
  auVar11 = FUN_07e343d8(fVar9 - fVar8,fVar10 - param_2);
  if (*(long *)(param_3 + 0x10) == 0) goto LAB_07e347e8;
                    /* try { // try from 07e34624 to 07f3462f has its CatchHandler @ 07e34ea8 */
  plVar2 = (long *)FUN_07e05018(*(long *)(param_3 + 0x10),0);
  if (plVar2 == (long *)0x0) {
LAB_07e34660:
    plVar2 = (long *)0x0;
  }
  else {
                    /* try { // try from 07e34630 to 07f346b3 has its CatchHandler @ 07e33de8 */
    lVar5 = *plVar2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08493d50 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08493d50))
    goto LAB_07e34660;
    plVar2 = (long *)(**(code **)(lVar5 + 0x398))(plVar2,*(undefined8 *)(lVar5 + 0x3a0));
  }
  if ((auVar11._8_8_ == 0) || ((auVar11._0_8_ & 0xffffffff) != 0)) {
    if (*(char *)(param_3 + 0x58) != '\0') {
      if (plVar2 != (long *)0x0) {
        if (*(long *)(param_3 + 0x10) == 0) {
LAB_07e347e8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 07e347e8 to 07f347eb has its CatchHandler @ 07e34eb4 */
          FUN_03a8a9c0();
        }
        uVar4 = FUN_07dfdfd8(*(long *)(param_3 + 0x10),0);
        FUN_07f6d914(&local_78,uVar4,0);
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 07e34710 to 07f34713 has its CatchHandler @ 07e34f5c */
                    /* try { // try from 07e34714 to 07f34717 has its CatchHandler @ 07e34f50 */
        if (uVar6 != 0) {
                    /* try { // try from 07e34718 to 07f3471b has its CatchHandler @ 07e34f4c */
                    /* try { // try from 07e3471c to 07f34763 has its CatchHandler @ 07e34f48 */
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
                    /* try { // try from 07e34764 to 07f34767 has its CatchHandler @ 07e34f44 */
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07e34768;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0)
        ;
LAB_07e34768:
                    /* try { // try from 07e3476c to 07f3476f has its CatchHandler @ 07e34ec0 */
                    /* try { // try from 07e34778 to 07f3477b has its CatchHandler @ 07e34ebc */
        uStack_58 = uStack_70;
        local_60 = local_78;
                    /* try { // try from 07e3477c to 07f3477f has its CatchHandler @ 07e34f2c */
        local_50 = local_68;
                    /* try { // try from 07e34780 to 07f347c7 has its CatchHandler @ 07e34f28 */
        (*(code *)*puVar3)(plVar2,&local_60,puVar3[1]);
      }
      *(undefined1 *)(param_3 + 0x58) = 0;
    }
  }
  else if ((*(char *)(param_3 + 0x58) == '\0') &&
          (*(undefined1 *)(param_3 + 0x58) = 1, plVar2 != (long *)0x0)) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07e347a0;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 07e346b4 to 07f346b7 has its CatchHandler @ 07e34f90 */
        piVar7 = piVar7 + 4;
                    /* try { // try from 07e346b8 to 07f346bb has its CatchHandler @ 07e34f8c */
      } while (uVar6 != 0);
    }
                    /* try { // try from 07e346bc to 07f346bf has its CatchHandler @ 07e34f80 */
                    /* try { // try from 07e346c0 to 07f346c3 has its CatchHandler @ 07e34f78 */
                    /* try { // try from 07e346c4 to 07f346c7 has its CatchHandler @ 07e34f68 */
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)OVRPlugin_TextureRectMatrixf_TypeInfo,0);
                    /* try { // try from 07e346c8 to 07f3470f has its CatchHandler @ 07e34f64 */
LAB_07e347a0:
    local_50 = DAT_015c5128;
    uStack_58 = 0;
    local_60 = 0;
    (*(code *)*puVar3)(plVar2,&local_60,puVar3[1]);
  }
                    /* try { // try from 07e347d0 to 07f347d3 has its CatchHandler @ 07e34eb8 */
                    /* try { // try from 07e347d4 to 07f347d7 has its CatchHandler @ 07e34f1c */
                    /* try { // try from 07e347d8 to 07f347db has its CatchHandler @ 07e34f14 */
                    /* try { // try from 07e347dc to 07f347df has its CatchHandler @ 07e34f10 */
  return;
}


