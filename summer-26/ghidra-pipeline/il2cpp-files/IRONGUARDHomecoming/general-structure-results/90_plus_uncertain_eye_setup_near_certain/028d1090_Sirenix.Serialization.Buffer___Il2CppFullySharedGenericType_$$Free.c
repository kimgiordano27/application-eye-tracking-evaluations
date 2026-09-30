/*
FUNCTION_NAME: Sirenix.Serialization.Buffer<__Il2CppFullySharedGenericType>$$Free
ENTRY_POINT: 028d1090
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x028d11c8) */

void Sirenix_Serialization_Buffer<__Il2CppFullySharedGenericType>__Free(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long in_x9;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  if (*(char *)(param_1 + in_x9 * 0x28 + 0x40) == '\0') {
    lVar5 = 0;
  }
  else {
    lVar5 = unaff_x19 - *(long *)(param_1 + in_x9 * 0x28 + 0x20);
  }
                    /* try { // try from 028d10c0 to 029d10c3 has its CatchHandler @ 028d10e0 */
                    /* try { // try from 028d10c4 to 029d10cb has its CatchHandler @ 028d0adc */
  iVar1 = *(int *)(param_1 + in_x9 * 0x28 + 0x44);
                    /* try { // try from 028d10cc to 029d10cf has its CatchHandler @ 028d10e8 */
                    /* try { // try from 028d10d0 to 029d10d3 has its CatchHandler @ 028d10e4 */
                    /* try { // try from 028d10d4 to 029d110f has its CatchHandler @ 028d0adc */
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* catch() { ... } // from try @ 028d0f50 with catch @ 028d10d8 */
                    /* catch() { ... } // from try @ 028d0e88 with catch @ 028d10dc */
                    /* catch() { ... } // from try @ 028d10c0 with catch @ 028d10e0 */
                    /* catch() { ... } // from try @ 028d0f90 with catch @ 028d10e4
                       catch() { ... } // from try @ 028d10d0 with catch @ 028d10e4 */
  FUN_0423eb70();
                    /* catch() { ... } // from try @ 028d0ec8 with catch @ 028d10e8
                       catch() { ... } // from try @ 028d10cc with catch @ 028d10e8 */
                    /* catch() { ... } // from try @ 028d0cec with catch @ 028d10ec */
                    /* catch() { ... } // from try @ 028d0dc8 with catch @ 028d10f0 */
                    /* catch() { ... } // from try @ 028d0e1c with catch @ 028d10f4 */
                    /* catch() { ... } // from try @ 028d0d24 with catch @ 028d10f8 */
  plVar2 = (long *)FUN_027c4708((double)((float)(lVar5 + (-iVar1 & iVar1 >> 0x1f)) / 1000.0),
                                uStack0000000000000000,uStack0000000000000008,
                                *(undefined8 *)
                                 Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__
                               );
                    /* try { // try from 028d1110 to 029d1113 has its CatchHandler @ 028d1120 */
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 028d1110 with catch @ 028d1120 */
  FUN_041d4560(plVar2);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar5 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* try { // try from 028d1160 to 029d1187 has its CatchHandler @ 028d119c */
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 028d1188 to 029d1193 has its CatchHandler @ 028d0adc */
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_028d1194;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_028d1194:
                    /* try { // try from 028d1194 to 029d119b has its CatchHandler @ 028d119c */
                    /* catch() { ... } // from try @ 028d1160 with catch @ 028d119c
                       catch() { ... } // from try @ 028d1194 with catch @ 028d119c */
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


