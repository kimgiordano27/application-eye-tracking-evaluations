/*
FUNCTION_NAME: FUN_03756f9c
ENTRY_POINT: 03756f9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;strong_file_logging_hits_5
*/


long FUN_03756f9c(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
                    /* try { // try from 03756fa0 to 03856fa3 has its CatchHandler @ 03757188 */
                    /* try { // try from 03756fbc to 03856fc3 has its CatchHandler @ 03757138 */
  if ((DAT_04538bfc & 1) == 0) {
                    /* try { // try from 03756fc8 to 03856fd3 has its CatchHandler @ 03757134 */
    FUN_01c5d288(Method_System_IO_FileStream_Init__);
                    /* try { // try from 03756fd4 to 03856fdf has its CatchHandler @ 03757130 */
    FUN_01c5d288(Method_System_IO_FileStream_EndWrite__);
                    /* try { // try from 03756fe0 to 03856fe7 has its CatchHandler @ 0375712c */
    FUN_01c5d288(Method_System_GC_CollectionCount__);
    FUN_01c5d288(UnityEngine_Rendering_Universal_SharedDecalEntityManager_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__);
                    /* try { // try from 03757008 to 0385700b has its CatchHandler @ 03757144 */
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
                    /* try { // try from 0375701c to 03857023 has its CatchHandler @ 03757124 */
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Volume>__);
                    /* try { // try from 03757028 to 03857033 has its CatchHandler @ 03757120 */
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__);
    DAT_04538bfc = 1;
  }
  puVar1 = Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__;
  if (param_3 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 03757048 to 0385705b has its CatchHandler @ 03757118 */
    if (*(int *)(*(long *)Method_System_IO_FileStream_EndWrite__ + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
                    /* try { // try from 0375705c to 03857103 has its CatchHandler @ 03756f10 */
    lVar2 = FUN_03727810(uVar9,param_3,0);
    if (lVar2 != 0) {
      lVar2 = FUN_038c7e04(lVar2,param_2,0);
      return lVar2;
    }
    goto LAB_0375721c;
  }
  if (param_2 == (long *)0x0) goto LAB_0375721c;
  lVar2 = (**(code **)(*param_2 + 0x2a8))
                    (param_2,*(undefined8 *)
                              Method_System_Linq_Enumerable_ToArray<SplinePathRef_SliceRef>__,
                     *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__,
                     *(undefined8 *)(*param_2 + 0x2b0));
  if (lVar2 == 0) {
                    /* try { // try from 03757104 to 03857107 has its CatchHandler @ 03757188 */
                    /* try { // try from 03757108 to 0385710b has its CatchHandler @ 0375713c */
                    /* try { // try from 0375710c to 0385710f has its CatchHandler @ 03757144 */
                    /* try { // try from 03757110 to 03857113 has its CatchHandler @ 03757128 */
                    /* try { // try from 03757114 to 03857117 has its CatchHandler @ 0375711c */
    lVar2 = (**(code **)(*param_2 + 0x2a8))
                      (param_2,*(undefined8 *)puVar1,
                       *(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__,
                       *(undefined8 *)(*param_2 + 0x2b0));
                    /* catch() { ... } // from try @ 03757048 with catch @ 03757118
                       try { // try from 03757118 to 0385715f has its CatchHandler @ 03756f10 */
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 03757114 with catch @ 0375711c */
                    /* catch() { ... } // from try @ 03757028 with catch @ 03757120 */
                    /* catch() { ... } // from try @ 0375701c with catch @ 03757124 */
                    /* catch() { ... } // from try @ 03757110 with catch @ 03757128 */
                    /* catch() { ... } // from try @ 03756fe0 with catch @ 0375712c */
                    /* catch() { ... } // from try @ 03756fd4 with catch @ 03757130 */
      if (*(int *)(*(long *)
                    Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__
                  + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03756fc8 with catch @ 03757134 */
        thunk_FUN_01c1d1e8();
      }
                    /* catch() { ... } // from try @ 03756fbc with catch @ 03757138 */
                    /* catch() { ... } // from try @ 03757108 with catch @ 0375713c */
      plVar4 = (long *)FUN_036eee44(lVar2,0);
                    /* catch() { ... } // from try @ 03757008 with catch @ 03757144
                       catch() { ... } // from try @ 0375710c with catch @ 03757144 */
      if (plVar4 == (long *)0x0) goto LAB_0375721c;
      lVar2 = (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      if (lVar2 != 0) goto LAB_037570b8;
    }
                    /* try { // try from 03757160 to 03857163 has its CatchHandler @ 03757174 */
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
LAB_037570b8:
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_01c5d5a4(lVar2,*(undefined8 *)
                                UnityEngine_Rendering_Universal_SharedDecalEntityManager_TypeInfo,
                         *(undefined8 *)Method_System_GC_CollectionCount__);
  }
                    /* try { // try from 03757168 to 0385716f has its CatchHandler @ 03757170 */
  lVar2 = FUN_032fbc28(uVar9,1,0);
  puVar1 = Method_System_IO_FileStream_Init__;
                    /* catch() { ... } // from try @ 03757168 with catch @ 03757170 */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 03757160 with catch @ 03757174 */
                    /* try { // try from 03757180 to 03857187 has its CatchHandler @ 03757260 */
    uVar9 = *(undefined8 *)Method_System_IO_FileStream_Init__;
                    /* catch() { ... } // from try @ 03756fa0 with catch @ 03757188
                       catch() { ... } // from try @ 03757104 with catch @ 03757188
                       try { // try from 03757188 to 038571a3 has its CatchHandler @ 03756f10 */
    lVar3 = thunk_FUN_01c495e4(lVar2,uVar9);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar2,uVar9);
    }
    lVar3 = *(long *)puVar1;
    plVar4 = (long *)thunk_FUN_01c495e4(lVar2,lVar3);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar2,lVar3);
    }
                    /* try { // try from 037571a4 to 038571bb has its CatchHandler @ 03757250 */
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 037571bc to 0385723f has its CatchHandler @ 03756f10 */
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_037571f8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01c72498(plVar4,lVar3,1);
LAB_037571f8:
    (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
    return lVar2;
  }
LAB_0375721c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


