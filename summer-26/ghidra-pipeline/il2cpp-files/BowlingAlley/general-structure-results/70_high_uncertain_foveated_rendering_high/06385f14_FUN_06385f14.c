/*
FUNCTION_NAME: FUN_06385f14
ENTRY_POINT: 06385f14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void FUN_06385f14(long param_1,undefined8 param_2,undefined8 param_3,short param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
                    /* try { // try from 06385f34 to 06486033 has its CatchHandler @ 06385f34
                       catch() { ... } // from try @ 06385f34 with catch @ 06385f34
                       catch() { ... } // from try @ 06386158 with catch @ 06385f34
                       catch() { ... } // from try @ 0638636c with catch @ 06385f34
                       catch() { ... } // from try @ 06386448 with catch @ 06385f34
                       catch() { ... } // from try @ 06386450 with catch @ 06385f34
                       catch() { ... } // from try @ 06386468 with catch @ 06385f34
                       catch() { ... } // from try @ 06386478 with catch @ 06385f34
                       catch() { ... } // from try @ 06386548 with catch @ 06385f34
                       catch() { ... } // from try @ 063865f0 with catch @ 06385f34 */
  if ((DAT_076deb1b & 1) == 0) {
    thunk_FUN_032e1da0(Oculus_Platform_MessageWithSystemVoipState_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727fab0);
    thunk_FUN_032e1da0(PTR_DAT_07283410);
    thunk_FUN_032e1da0(PTR_DAT_0727fed0);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    DAT_076deb1b = 1;
  }
  if (*(short *)(param_1 + 0xd0) != param_4) {
    FUN_06385ec8();
    goto LAB_06386160;
  }
  if ((param_5 >> 1 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0727fab0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar3 = FUN_05986da8(0);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    thunk_FUN_0333a630();
  }
  puVar2 = Oculus_Platform_MessageWithSystemVoipState_TypeInfo;
  if ((param_5 & 1) != 0) {
    lVar4 = FUN_05986d6c(0);
    if (lVar4 == 0) {
LAB_06386038:
      puVar1 = PTR_DAT_0727fed0;
      if (*(int *)(*(long *)PTR_DAT_0727fed0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar4 = FUN_0599f7fc(0);
      if (DAT_076cf5ef == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0727fed0);
        DAT_076cf5ef = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar1;
      }
      if (lVar4 == *(long *)(*(long *)(lVar6 + 0xb8) + 8))
      goto Unity_Collections_CollectionHelper__IsAligned;
    }
    else {
      uVar3 = thunk_FUN_032f70fc(lVar4,0);
      uVar8 = *(undefined8 *)PTR_DAT_07283410;
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
      }
      uVar8 = FUN_059324dc(uVar8,0);
      uVar5 = FUN_0593c20c(uVar3,uVar8,0);
      if ((uVar5 & 1) == 0) goto LAB_06386038;
    }
    *(long *)(param_1 + 200) = lVar4;
    thunk_FUN_0333a630((long *)(param_1 + 200),lVar4);
  }
Unity_Collections_CollectionHelper__IsAligned:
  puVar7 = (undefined8 *)(param_1 + 0x78);
  *puVar7 = param_3;
  thunk_FUN_0333a630(puVar7,param_3);
  lVar4 = FUN_032ef8c0(param_1 + 0xb8,param_2,0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar6);
    lVar6 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) == lVar4) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    thunk_FUN_0333a630((undefined8 *)(param_1 + 0xc0),0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    thunk_FUN_0333a630(puVar7,0);
    Unity_Collections_Bitwise__FindWithBeginEnd(param_1,param_2,param_3,1);
    return;
  }
  if (lVar4 == 0) {
    return;
  }
LAB_06386160:
  FUN_06386164();
  thunk_FUN_032e1da0(PTR_DAT_07279578);
  uVar3 = thunk_FUN_032a56a0();
  uVar8 = thunk_FUN_032e1da0(Meta_XR_MetaXREyeTrackedFoveationFeature_TypeInfo);
  FUN_0592371c(uVar3,uVar8,0);
  uVar8 = thunk_FUN_032e1da0(Meta_XR_MetaXRFoveationFeature_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar3,uVar8);
}


